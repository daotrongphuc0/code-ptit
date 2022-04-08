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
public class J03027_rutgonxaukitu {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.println(xuli(s));
    }
    public static String xuli(String s){
        StringBuilder kq = new StringBuilder(s);
        for (int i = 0; i < kq.length()-1; i++) {
            if(kq.charAt(i) == kq.charAt(i+1)){
                kq.deleteCharAt(i);
                kq.deleteCharAt(i);
                i=-1;
            }    
        }
        String kq1 = kq.toString();
        if(kq1.length() != 0)
            return kq1;
        else return "Empty String";
    }
}
