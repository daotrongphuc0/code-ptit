/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04002_khaibaolophcn;

/**
 *
 * @author ASUS
 */
public class Rectange {
    private long width,height;
    private String color;

    public Rectange() {
        width=1;    height=1;
    }

    public Rectange(long width, long height, String color) {
        this.width = width;
        this.height = height;
        this.color = xuli(color);
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(long width) {
        this.width = width;
    }

    public double getHeight() {
        return height;
    }

    public void setHeight(long height) {
        this.height = height;
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }
    
    public long findArea(){
        return height*width;
    }
    
    public long findPerimeter(){
        return 2*(height+width);
    }
    
    private String xuli(String s){
        if(s.compareTo("INVALID")==1) return "INVALID";
        StringBuilder kq = new StringBuilder("");
        kq.append(Character.toUpperCase(s.charAt(0)));
            for (int i = 1; i < s.length(); i++) {
                kq.append(Character.toLowerCase(s.charAt(i)));
            }
        return kq.toString();          
    }
    
    @Override
    public String toString() {
        if(height > 0 && width >0) return findPerimeter() + " " + findArea()+ " " + color  ;
        else return "INVALID";
    }
    
}
