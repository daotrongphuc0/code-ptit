/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class J01003_giaiphuongtrinhbacnhat {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        if(a ==0) {
            if(b == 0){
                System.out.println("VSN");
            }
            else System.out.println("VN");
        }
        else System.out.println(String.format("%.2f", (float)(-b)/a));
    }
}
