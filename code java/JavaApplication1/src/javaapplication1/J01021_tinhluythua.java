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
public class J01021_tinhluythua {
    public static long M =1000000007;
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        //boolean check = true;
        while(true){
            long a =in.nextLong();
            long b =in.nextLong();
            if(a==0 && b== 0){
                break;
            }
            System.out.println(luythua(a,b)%M);
        }
    }
    public static long luythua(long a,long b){
        if(b==0) return 1;
        long q = luythua(a,b/2) %M;
        if(b%2==1) return (a*((q*q) % M)) %M;
        else return  (q*q) %M;
    }
}
