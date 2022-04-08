/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ransanmoi;

import java.awt.*;
import java.awt.image.BufferedImage;
import java.io.IOException;
import javax.imageio.ImageIO;

/**
 *
 * @author daotr
 */
public class Data {
    public static BufferedImage image;
    public static Image imageHead;
    public static Image imageHead_GoLeft;
    public static Image imageHead_GoRight;
    public static Image imageHead_GoUp;
    public static Image imageHead_GoDown;
    
    public static Image imageBody;
    
    public static Image imageWorm1;
    public static Image imageWorm2;
    public static Image imageWorm3;
    
    public static Animation headGoUp;         //class hoat ảnh
    public static Animation headGoDown;
    public static Animation headGoRight;
    public static Animation headGoLeft;
    
    public static Animation imageWorm;
    
    public static void loadImage(){
        try {
            
            image = ImageIO.read(RanSanMoi.class.getResource("/resource/sprite1.png"));  // load ảnh 
            imageHead = image.getSubimage(2,3,30,30);      // cảnh để lấy các icon
            imageBody = image.getSubimage(6,79,20,20);
            imageHead_GoLeft = image.getSubimage(75,3,30,30);
            imageHead_GoRight = image.getSubimage(110,3,30,30);
            imageHead_GoUp = image.getSubimage(145,3,30,30);
            imageHead_GoDown = image.getSubimage(39,3,30,30);
            
            imageWorm1 = image.getSubimage(2,40,30,30);
            imageWorm2 = image.getSubimage(32,40,30,30);
            imageWorm3 = image.getSubimage(63,40,30,30);
        } catch (IOException ex) {}
    }
     public static void loadAllAnimation(){
        headGoUp = new Animation();     // them các ảnh vào để tạo hiệu ứng chuyển động
        headGoUp.addImage(imageHead);
        headGoUp.addImage(imageHead_GoUp);
        
        headGoDown = new Animation();
        headGoDown.addImage(imageHead);
        headGoDown.addImage(imageHead_GoDown);
        
        headGoLeft = new Animation();
        headGoLeft.addImage(imageHead);
        headGoLeft.addImage(imageHead_GoLeft);
        
        headGoRight = new Animation();
        headGoRight.addImage(imageHead);
        headGoRight.addImage(imageHead_GoRight);
        
        imageWorm = new Animation();
        imageWorm.addImage(imageWorm1);
        imageWorm.addImage(imageWorm2);
        imageWorm.addImage(imageWorm3);
     }
}
