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
public class J01001_hinhchunhat {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        String ds[] = s.split("\\s+");
        int a = Integer.parseInt(ds[0]);
        int b = Integer.parseInt(ds[1]);
        if(a >0 && b> 0) System.out.printf(2*(a+b) + " " + a*b);
        else System.out.println("0");
    }
}
