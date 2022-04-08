/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ransanmoi;

import java.awt.Image;

/**
 *
 * @author daotr
 */
public class Animation {
    public Image[] images;
    public int n;
    public int currentImage ;
    
    public Animation(){
        this.n=0;
        this.currentImage =0;
    }
    public void addImage(Image image){
        Image[] ar = images;
        images = new Image[n+1];
        
        for (int i = 0; i < n; i++) {
            images[i] =ar[i];
        }
        images[n]=image;
        n++;
    }
    public void update(){
        currentImage ++;
        if(currentImage >=2) currentImage =0;
    }
    
    public Image getCurrentImage(){
        return images[currentImage];
    }
}
