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
public class J03007_sodep_2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            String s = in.nextLine();
            System.out.println(xuli(s));
        }
    }
    public static String xuli(String s){
        if(s.length() ==0) return "NO";
        if(s.startsWith("8") && s.endsWith("8")){
            int tong =0;
            for (int i = 0; i < s.length(); i++) {
                tong += (int)s.charAt(i) -48;
            }
            if(tong%10 ==0){
                StringBuilder b = new StringBuilder(s);
                b =b.reverse();
                String kq = b.toString();
                if(s.equals(kq)) return "YES";
                else return "NO";
            }
            else return "NO";
        }
        else return "NO";
    }
}
