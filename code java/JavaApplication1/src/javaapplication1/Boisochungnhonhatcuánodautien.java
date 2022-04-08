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
public class Boisochungnhonhatcuánodautien {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        long t =in.nextLong();
        while(t-->0){
            long n =in.nextLong();
            long res =2;
            for (long i = 3; i <=n; i++) {
                res = Bcnn(i,res);
            }
            if(n==1) res=1;
            if(n<=0) res =0;
            System.out.println(res);
        }
    }
    public static long Ucln(long a,long b){
        while(a*b!=0){
            if(a>=b) a%=b;
            else b%=a;
        }
        return a+b;
    }
    public static long Bcnn(long a,long b){
        return a/Ucln(a,b)*b;
    }
}
