/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ransanmoi;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Point;
import java.util.Collections;
import java.util.Random;
import javax.swing.JOptionPane;

/**
 *
 * @author daotr
 */
public class Snake {
    private int doDai=3, x[],y[];
    /* các giá trị hằng số giup thao tác và sửa đổi nhanh hơn*/
    public static int GO_UP = 1; 
    public static int GO_DOWN = -1;
    public static int GO_LEFT = 2;
    public static int GO_RIGHT =-2;
    
    public static int BEGIN_MAXLEN =10;      //độ dài lớn nhất của con rắn trong level 1
    public static int BEGIN_SPEED =200;         // tốc độ di chuyển ban đầu
    
    private int vector = Snake.GO_DOWN;           // vector chỉ hướng di chuyển của rắn và khởi tạo đi xuống 
    
    private long timeRun =0;                      // bộ đếm thời gian chạy để tính thời gian chuyển động của ảnh  con rắn
    private long timeEat =0;                    // bộ đếm thời gian  để tính thời gian chuyển động của ảnh chuyển động đầu con rắn 
    
    int speed = BEGIN_SPEED ;                     // khởi tạo tốc độ bằng tốc độ ban đầu   ,  giá trị càng nhỏ tốc độ càng lớn
    int maxLen =BEGIN_MAXLEN;                       // khởi tạo độ dài bằng độ dài ban đầu 
    int speed_bite = 200;                           // tốc độ cắn  ,  giá trị càng nhỏ tốc độ càng lớn
    
    /* biến có tác dụng khống chế thao tác quá nhanh */
    boolean updateAfterChangeVector =true;           
    
    public Snake(){     
        x = new int[400];                   // khởi tạo 2 mảng 1 chiều để lưu vị trí rắn
        y = new int[400];
        
        x[0] =5;                            //tọa độ ban đầu của rắn
        y[0] =4;
        
        x[1] =5;
        y[1] =3;
        
        x[2] =5;
        y[2] =2 ;
        
    }
    
    public void resetGame(){
        // đặt lại các giá trị của rắn 
        x[0] =5;
        y[0] =4;
        
        x[1] =5;
        y[1] =3;
        
        x[2] =5;
        y[2] =2 ;
          
        doDai =3;
      
        vector = Snake.GO_DOWN;    
    }
    public void setVector(int v){               // hàm thay đổi hướng chạy 
        if(vector != -v && updateAfterChangeVector ){
            vector = v;
            /* sau khi thay đổi hướng phải đưa hàm updateAfterChangeVector về false và sau 1 khoảng thời gian mới mở 
            tráng việc thao tác 2 nút quay 1 bên  liên tục có thể làm cho rắn quay 180 độ khi chưa kịp di chuyển quay 1 ô
            */
            updateAfterChangeVector= false;    
        }
    }
    public boolean XDMoiNamTrongRan(int xMoi,int yMoi){  // kiểm tra mồi có nằm trong thân rắn hay không
        for (int i = 0; i < doDai; i++) {
            if(x[i] == xMoi && y[i] == yMoi) return true;
        }
        return false;
    }   
    public Point layToaDoMoi(){     //random  tọa độ mồi phù hợp
        Random r = new Random();
        int x1,y1;
        do{
            x1 = r.nextInt(19);
            y1 = r.nextInt(19);
        }while(XDMoiNamTrongRan(x1,y1));
        return new Point(x1,y1);
    } 
    
    public int getCurrentSpeed(){       //lấy tốc độ của level, mỗi level tăng  thêm 1.25 lần <=> (*0.8)
        int speed1=BEGIN_SPEED;
        for (int i = 0; i < GameScreen.currentLevel; i++) {
            speed1*=0.8;
        }
        return speed1;
    }
    /* update liên tục trạng thái rắn theo bộ đếm thời gian System   */
    public void update(){
        /* kiểm tra nếu đủ điểm để lên level mới thì reset lại game 
        lấy tốc độ mới cho level mới và tạm dừng để người dùng chuẩn bị 
        tăng giá trị maxLen để level mới cần độ dài lớn hơn để tăng level
        */
        if(doDai==maxLen) {
            GameScreen.isPlaying=false;
            resetGame();
            GameScreen.currentLevel++;
            maxLen +=5; 
            speed= getCurrentSpeed();
        }
        
        /*kt con rắn cắn đuôi hay không */
        for (int i = 1; i < doDai; i++) {
            if(x[0]==x[i]&&y[0]==y[i]){
                /*nếu có thì
                -yêu cầu nhập tên người chơi cho chò chơi vừa kết thúc
                -khởi tạo lại toàn bộ giá trị
                */
                String name = JOptionPane.showInputDialog("Moi ban nhap ten: ");     // tạo ra hộp thoại nhập tên 
                /* chỉnh sửa name nếu thằng người chơi k chịu nhập hay nhập ngu*/
                if(name!= null){
                    name = name.trim().replaceAll(" ", "");
                    if(name.length()>10){
                        StringBuilder tmp = new StringBuilder(name);
                        name = tmp.substring(0, 10).toString();
                    }
                } else name = "NoName";
                
                
                RanSanMoi.users.add(new User(name,GameScreen.currentLevel,GameScreen.diem) );    // thêm người chơi vào mảng người chơi cao điểm nhất
                Collections.sort(RanSanMoi.users);              //sắp xếp lại mảng 
                while(RanSanMoi.users.size()>10){                //loại bỏ hết ng dùng thuộc top lớn hơn 10
                    RanSanMoi.users.remove(10);
                }
                
                // khởi tạo lại giá trị
                GameScreen.isPlaying =false;
                GameScreen.isGameOver=true;            
                speed = BEGIN_SPEED;
                maxLen =BEGIN_MAXLEN;
                GameScreen.diem =0;
                GameScreen.currentLevel=1;
            }
        }
        
        
        
        if(System.currentTimeMillis()-timeEat >speed_bite){  // nếu time lớn hơn speed_bite thì up date lại ảnh đầu rắn (các hướng đều update nhưng chỉ sử dụng cái để làm đầu rắn 
            
            Data.headGoUp.update();
            Data.headGoLeft.update();
            Data.headGoRight.update();
            Data.headGoDown.update();
          
            timeEat = System.currentTimeMillis();    //cập nhật timeEat
        }
        
        if(System.currentTimeMillis()-timeRun >speed){   // nếu time lớn hơn time của tốc độ thì cập nhật lại vị trí rắn 
            
            updateAfterChangeVector= true; //cho phép thay đổi hướng (biến fix lỗi)
            
            
            if(GameScreen.bg[x[0]][y[0]] ==2){     // nếu đầu rắn trùng vị trí mồi 
                doDai++;                                // thì tăng độ dài
                GameScreen.bg[x[0]][y[0]] =0;               // xóa mồi 
                GameScreen.bg[layToaDoMoi().x][layToaDoMoi().x] =2;   //tạp mồi mới
                
                GameScreen.diem +=100;   //tăng điểm 
                
            }
            
            for (int i = doDai-1; i >0; i--) {   // update thân rắn 
                x[i] = x[i-1];
                y[i] = y[i-1];
            }
            
            if(vector == Snake.GO_UP) y[0]--;    //update hướng di chuyển 
            if(vector == Snake.GO_DOWN) y[0]++;
            if(vector == Snake.GO_LEFT) x[0]--;
            if(vector == Snake.GO_RIGHT) x[0]++;
            
            if(x[0] <0 ) x[0] =19;    // nếu ra ngoài bản đồ thì cho quay lại ở phía bên kia
            if(x[0] >19 ) x[0] =0;
            if(y[0] <0 ) y[0] =19;
            if(y[0] >19 ) y[0] =0;
            
            timeRun = System.currentTimeMillis();
        }
    }
    public void paintSnake(Graphics g){
        
        for (int i = 1; i < doDai; i++) {   //vẽ thân rắn 
            //g.fillRect(x[i]*20+1, y[i]*20+1, 18, 18);
            g.drawImage(Data.imageBody, x[i]*20 +GameScreen.padding +GameScreen.khungGame, y[i]*20 +GameScreen.padding+GameScreen.khungGame, null);
        }
        //vẽ đầu rắn 
        if(vector == Snake.GO_UP) g.drawImage(Data.headGoUp.getCurrentImage(), x[0]*20-6+GameScreen.padding+GameScreen.khungGame, y[0]*20-6+GameScreen.padding+GameScreen.khungGame, null);
        else {
            if(vector == Snake.GO_DOWN) g.drawImage(Data.headGoDown.getCurrentImage(), x[0]*20-6+GameScreen.padding+GameScreen.khungGame, y[0]*20-6+GameScreen.padding+GameScreen.khungGame, null);
            else {
                if(vector == Snake.GO_LEFT) g.drawImage(Data.headGoLeft.getCurrentImage(), x[0]*20-6+GameScreen.padding+GameScreen.khungGame, y[0]*20-6+GameScreen.padding+GameScreen.khungGame, null);
                else {
                    g.drawImage(Data.headGoRight.getCurrentImage(), x[0]*20-6+GameScreen.padding+GameScreen.khungGame, y[0]*20-6+GameScreen.padding+GameScreen.khungGame, null);
                }
            }
        }
    }
}
