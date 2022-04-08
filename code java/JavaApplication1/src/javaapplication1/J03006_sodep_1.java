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
public class J03006_sodep_1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int  t  = Integer.parseInt(in.nextLine());
        while(t-->0){
            String s = in.nextLine();
            System.out.println(xuli(s));
        }
    }
    public static String xuli(String  s){
        boolean kt = true;
        for (int i = 0; i < s.length(); i++) {
            if((int)s.charAt(i)%2==1){
                kt = false;
                break;
            }
        }
        if(kt){
            StringBuilder b = new StringBuilder(s);
            b =b.reverse();
            String kq = b.toString();
            if(s.equals(kq)) return "YES";
            else return "NO";
        }
        else return "NO";
       
    }
}
