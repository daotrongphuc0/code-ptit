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
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
            Point a = new Point(in.nextDouble(),in.nextDouble());
            Point b = new Point(in.nextDouble(),in.nextDouble());
            Point c = new Point(in.nextDouble(),in.nextDouble());
            Triangle tamgiac = new Triangle(a,b,c);
            System.out.println(tamgiac.areaOfCircumcircle());
        }
    }
}
