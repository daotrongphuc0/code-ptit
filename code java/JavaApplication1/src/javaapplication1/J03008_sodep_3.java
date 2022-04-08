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
public class J03008_sodep_3 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            String s = in.nextLine();
            System.out.println(xuli(s));
        }
    }
    public static String xuli(String s){
        if(s.length()==0 ) return "NO";
        StringBuilder b = new StringBuilder(s);
        b =b.reverse();
        String kq = b.toString();
        if(s.equals(kq)){
            boolean kt = true;
            for (int i = 0; i < s.length(); i++) {
                if(s.charAt(i)!= '2' && s.charAt(i)!= '3' && s.charAt(i)!= '5' && s.charAt(i)!= '7'){
                    kt = false;
                    break;
                }
            }
            if(kt) return "YES";
            else return "NO";
        } 
        return "NO";
    }
}
