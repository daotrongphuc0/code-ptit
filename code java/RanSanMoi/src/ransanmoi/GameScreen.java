/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ransanmoi;

import javax.swing.*;
import java.awt.*;



public class GameScreen extends JPanel implements Runnable{
    
    static int[][] bg = new int[20][20];           // mảng giá trị xd rắn ,mồi, vị trí trống (1 là rắn,2 là mồi ,0 là trống )
    
    static int khungGame = 10;              
    static int WIDTHBangDiem = 250;    // độ rộng bảng điểm 
    static int padding = 5;             //lề của map game
    static int WIDTH =400;              
    static int HEIGHT =400;
    
    static boolean isPlaying =false;      //biến xđ tạm dừng game 
    static boolean enableText =true;        // biến xd text hiện hay tắt để làm chữ nhấp nháy
    
    Snake ran ;
    
    Thread thread;
    
    static int currentLevel = 1;         // đếm level
    static int diem = 0 ;                   // đếm điểm 
    
    static boolean isGameOver =false;   // biến xd game kết thúc
    public GameScreen(){
        
        ran = new Snake();       // khai báo con rắn 
        Data.loadImage();           //load ảnh
        Data.loadAllAnimation();   // load hoạt ảnh
        
        bg[ran.layToaDoMoi().x][ran.layToaDoMoi().x] =2;            // khởi tạo mồi 
        
        thread = new Thread(this);                      // 2 dòng này gọi hàm run() đã bị ghi đè ở dưới
        thread.start();
    }
    @Override
    public void run(){
        long timeWormDance =0; // tính time để chạy hoạt ảnh worm
        long timeText =0;    // tính time để chữ nhấp nháy
        while(true){
            if(System.currentTimeMillis()-timeText >700){   // nhấp nháy chứ với tốc độ 700 ms
                    enableText=!enableText;
                    timeText = System.currentTimeMillis();
                }         
            
            if(isPlaying){
                if(System.currentTimeMillis()-timeWormDance >200){ // nhảy với tốc dộ 200 ms
                    Data.imageWorm.update();
                    timeWormDance = System.currentTimeMillis();
                }          
                ran.update();   //update rắn 
            }
            repaint();   // hàm ghi đè gọi hàm paint() bên dưới
            //try {
            //  Thread.sleep(20);
            //}catch (InterruptedException ex) {}
        }
    }
    public void paintBg(Graphics g){  // vẽ background
        g.setColor(Color.YELLOW);
        g.fillRect(0, 0, WIDTH +padding*2+WIDTHBangDiem+khungGame*4,HEIGHT+padding*2+khungGame*2);  //vẽ nền vàng trước
        
        g.setColor(Color.LIGHT_GRAY);
        g.fillRect(WIDTH +padding*2+khungGame*3, khungGame, WIDTHBangDiem,90);  //  vẽ đè lên 2 ô màu xám   đè lên màu vàng     
        g.setColor(Color.LIGHT_GRAY);
        g.fillRect(WIDTH +padding*2+khungGame*3, 110, WIDTHBangDiem,HEIGHT+padding*2-100);
        
        veKhung(g);       //vẽ khung màu xanh đè lên màu vàng
        g.setColor(Color.black);
        g.fillRect(khungGame, khungGame, WIDTH +padding*2,HEIGHT+padding*2);   // vẽ map đen đè lên trên 
        for (int i = 0; i < 20; i++) {    // tìm trong ma trận vị trí sâu để in hình con sâu
            for (int j = 0; j < 20; j++) {
                //g.fillRect(i*20+1, j*20+1  , 18, 18);
                if(bg[i][j]==2){
                    g.drawImage(Data.imageWorm.getCurrentImage(), i*20-7+padding+khungGame, j*20-7+ padding +khungGame, null);
                }
            }
        }
    }
    private void veKhung(Graphics g){    
        g.setColor(Color.green);
        g.fillRect(0, 0, WIDTH +padding*2+khungGame*2,HEIGHT+padding*2+khungGame*2);
    } 
    @Override
    public void paint(Graphics g){
        paintBg(g);    //vẽ nền sau đó vẽ rắn
        ran.paintSnake(g);
        
        
        if(!isPlaying){       // in chữ nếu game pause
            if(enableText){
                g.setColor(Color.white);
                g.setFont(g.getFont().deriveFont(25.0f));  // hàm lấy cỡ chữ
                g.drawString("PRESS SPACE TO PLAY GAME", 25, 200);
            }
        }
        
        if(isGameOver){   //in chữ nếu game over
            g.setColor(Color.red);
            g.setFont(g.getFont().deriveFont(30.0f));
            g.drawString("GAME OVER", 90, 250);
        }
        /* in toàn bộ thông tin */
        g.setColor(Color.BLACK);
        g.setFont(g.getFont().deriveFont(28.0f));
        g.drawString("Lever: "+currentLevel, 450, 50);
        
        g.setFont(g.getFont().deriveFont(22.0f));
        g.drawString("Point: "+diem, 450, 80);
        
        g.setColor(Color.blue);
        g.setFont(g.getFont().deriveFont(22.0f));
        g.drawString("Top player: ", 450, 130);
        
        g.setFont(g.getFont().deriveFont(14.0f));
        g.setColor(Color.red);
        g.drawString("Name", 470, 153);
        g.drawString("Level", 550, 153);
        g.drawString("Point", 600, 153);
        g.setColor(Color.BLACK);
        for (int i = 0; i < RanSanMoi.users.size(); i++) {
            g.drawString(RanSanMoi.users.get(i).getName(), 470, i*25+175);
            g.drawString(String.format("%d",RanSanMoi.users.get(i).getLevel()), 550, i*25+175);
            g.drawString(String.format("%d",RanSanMoi.users.get(i).getDiem()), 600, i*25+175);
        }
        
    }
}
