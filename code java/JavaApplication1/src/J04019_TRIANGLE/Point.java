/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04019_TRIANGLE;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Point {
    private double x,y;

    public Point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public static double kc(Point a,Point b){
        return Math.sqrt(Math.pow(a.getX()-b.getX(),2)+Math.pow(a.getY()-b.getY(),2));
    }
    
    public static Point nextPoint(Scanner in){
        Point a = new Point(in.nextDouble(),in.nextDouble());
        return a;
    }
    @Override
    public String toString() {
        return x + " " + y ;
    }
    
}
