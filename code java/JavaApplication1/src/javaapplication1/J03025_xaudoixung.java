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
public class J03025_xaudoixung {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            String a = in.nextLine();
            System.out.println(xuli(a));
        }
    }
    public static String xuli(String a){
        int n = a.length();
        if(n == 0) return "NO";
        int dem =0;
        if(n%2==1){
            for (int i = 0; i < (a.length()-1)/2; i++) {
            if(a.charAt(i) != a.charAt(a.length()-i-1)) dem ++;
            }
            if(dem <= 1) return "YES";
            else  return "NO";
        }
        else{
            for (int i = 0; i < a.length()/2; i++) {
            if(a.charAt(i) != a.charAt(a.length()-i-1)) dem ++;
            }
            if(dem ==1) return "YES";
            else return "NO";
        }
    }
}
