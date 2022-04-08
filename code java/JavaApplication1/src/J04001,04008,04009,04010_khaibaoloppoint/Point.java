/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04001_khaibaoloppoint;

/**
 *
 * @author ASUS
 */
public class Point {
    private double x,y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public void setX(double x) {
        this.x = x;
    }

    public double getY() {
        return y;
    }

    public void setY(double y) {
        this.y = y;
    }
    
    public double distance(Point b){
        double x2=b.getX(),y2=b.getY();
        double gt1 = Math.abs(x-x2),gt2 =Math.abs(y-y2);
        gt1 = Math.pow(gt1, 2);
        gt2 = Math.pow(gt2, 2);
        return Math.sqrt(gt1+gt2);
    }
    
    public static double distance(Point a,Point b){
        double x1= a.getX(),x2=b.getX(),y1=a.getY(),y2=b.getY();
        double gt1 = Math.abs(x1-x2),gt2 =Math.abs(y1-y2);
        gt1 = Math.pow(gt1, 2);
        gt2 = Math.pow(gt2, 2);
        return Math.sqrt(gt1+gt2);
    }
    @Override
    public String toString() {
        return x + " " + y ;
    }
    
}
