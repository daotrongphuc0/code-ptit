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
public class J01007_kiemtrasofibonasi {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            System.out.println(ktfb(n));
        }
    }
    public static String ktfb(long n){
        long cs1 =1,cs2=1;
        while(cs2 < n){
            long tmp =cs2;
            cs2 += cs1;
            cs1 =tmp;
        }
        if(n == cs2) return "YES";
        else return "NO";
    }
}
