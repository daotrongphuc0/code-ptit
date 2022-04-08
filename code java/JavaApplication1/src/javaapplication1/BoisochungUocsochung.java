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
public class BoisochungUocsochung {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
        long a= in.nextLong(),b=in.nextLong();
        System.out.print(Bcnn(a,b));
        System.out.print(" ");
        System.out.println(Ucln(a,b));
    }}
    public static long Ucln(long a,long b){
        while(a*b!=0){
            if(a>b) a%=b;
            else b%=a;
        }
        return a+b;
    }
    public static long Bcnn(long a,long b){
        return a*b/Ucln(a,b);
    }
}
