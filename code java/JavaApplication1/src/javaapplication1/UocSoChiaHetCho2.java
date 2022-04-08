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
public class UocSoChiaHetCho2 {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            System.out.println(Demuocchiahet(n));
            
        }
    }
    public static long Demuocchiahet(long n){
    // tim 2^k*m , m le 
        if(n%2==1 || n <2) return 0;
        long k =0;
        while(n%2==0){ //dem so 2^k
            n/=2;
            k++;
        }
        long demuoc =1;
        for (int i = 3; i <=Math.sqrt(n); i++) {
            if(n%i==0) demuoc++;
        }
        demuoc *=2;
        if((long)Math.sqrt(n)*(long)Math.sqrt(n)==n) demuoc--;
        return demuoc*k;
    }
}
