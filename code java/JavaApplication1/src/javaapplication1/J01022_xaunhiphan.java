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
public class J01022_xaunhiphan {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        long m[] = new long[95];
        m[1] =(long)1;
        m[2] =(long)1;
        for (int i = 3; i < 93; i++) {
            m[i] = (long)m[i-1] +(long)m[i-2];
        }
        long t =in.nextLong();
        while(t-->0){
            long n = in.nextLong();
            long k = in.nextLong();
            while(k!=(long)1 || k!=(long)2){
                if(k > m[n-2]){
                    (long)k = k - m[n-2];
                    n-=1;
                }
                else {
                    n-=2;
                }
            }
            if(k ==1) System.out.println(0);
            else System.out.println(1);
        }
    }
}
