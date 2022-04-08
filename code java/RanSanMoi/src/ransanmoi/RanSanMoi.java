/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package ransanmoi;

/**
 *
 * @author daotr
 */
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.ArrayList;
import javax.swing.*;

public class RanSanMoi extends JFrame{
    
    GameScreen game;
    
    public static ArrayList<User> users;
    
    public RanSanMoi(){
        super("Snake");   // tiêu đề cửa sổ 
        setSize(750,500); // tạo cửa sổ 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);  // tạo nút ấn X để thoát chương trình
        
        users = new ArrayList<User>(); //tạo mảng người dùng
        readData(); //đọc dữ liệu từ file data.txt
        
        game = new GameScreen();
        add(game);   // thêm màn hình game;
        this.addKeyListener(new Handler());
        
        this.addWindowListener(new WindowAdapter(){ 
            /* hàm này để nghe sự kiện đóng tab của Window . nếu nó sảy ra thì lưu file trước khi đóng */
            @Override
            public void windowClosing(WindowEvent e) {   // nếu người dùng ấn tắt thì sẽ lưu dữ liệu trước ki tắt 
                updateData();
            }
            
        });
        
        setVisible(true);
    }
    public static void main(String[] args) {
        RanSanMoi f = new RanSanMoi();
    }

    private class Handler implements KeyListener{            // khai báo lớp nằm trong lớp có đặc điểm KeyListener

        @Override
        public void keyTyped(KeyEvent e) {}  

        @Override
        public void keyPressed(KeyEvent e) {                  // sự kiện ấn 
            if(e.getKeyCode() == KeyEvent.VK_SPACE){       // lắng nghe sự kiện ấn nút space
                GameScreen.isPlaying=!GameScreen.isPlaying;   // nếu game đang tạm dừng thì tiếp tục chạy và ngược lại
                if(GameScreen.isGameOver) {                // kiểm tra game over
                    GameScreen.isGameOver =false;                 // đảo trạng thái cho game mới
                    game.ran.resetGame();            //gọi hàm hởi tạo lại con rắn 
                }
            }
            
            if(e.getKeyCode() == KeyEvent.VK_UP){     // ấn mũi tên lên để đi lên
                game.ran.setVector(Snake.GO_UP);
            }
            
            if(e.getKeyCode() == KeyEvent.VK_DOWN){    // ấn mũi tên xuống để đi xuống
                game.ran.setVector(Snake.GO_DOWN);
            }
            
            if(e.getKeyCode() == KeyEvent.VK_LEFT){    // ấn mũi tên sang trái để đi sang trái
                game.ran.setVector(Snake.GO_LEFT);
            }
            
            if(e.getKeyCode() == KeyEvent.VK_RIGHT){    // ấn mũi tên sang phải để đi sang phải
                game.ran.setVector(Snake.GO_RIGHT);
            }
        }

        @Override
        public void keyReleased(KeyEvent e) {}
        
    }
    
    
    
    
    public static void updateData(){      //hàm ghi lại vào file
        BufferedWriter bw =null;
        try {
            FileWriter fw = new FileWriter("data/data.txt");   // mở file để ghi
            bw = new BufferedWriter(fw);     
            
            for(User u:users){               // lặp hết danh sách user để ghi
                bw.write(u.getName()+" "+u.getLevel()+" "+u.getDiem() );
                bw.newLine();    //xuống dòng ghi user mới
            }
            
        } catch (IOException ex) {}
        finally{             //finally luôn luôn thự hiện bất kể ngoại lệ có sảy ra hay không
            try {
                bw.close();          
            } catch (IOException ex) {}
        }
    }
    
    public static void readData(){    //hàm đọc dữ liệu
        BufferedReader br =null;
        try {
            FileReader fr = new FileReader("data/data.txt");
            br = new BufferedReader(fr);
            /* mở file và đọc từng dòng */
            String line = null;
            line = br.readLine();
            while(line!= null){
                String[] str = line.split("\\s+");   //cắt từng dòng để thành dữ liệu từng loại
                users.add(new User(str[0],Integer.parseInt(str[1]),Integer.parseInt(str[2])));   // thêm vào araylist
                line = br.readLine();                                         //đọc dòng mới
            }
            
            
            
           // br.close();
        } catch (IOException ex) {}
        finally{                                //finally luôn luôn thự hiện bất kể ngoại lệ có sảy ra hay không
            try {
                br.close();
            } catch (IOException ex) {}
        }
        
    }
    
}
