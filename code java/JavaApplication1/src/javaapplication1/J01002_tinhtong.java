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
public class J01002_tinhtong {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int t  = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            long kq=0;
            if(n%2 ==0 ) kq = (n+1) * n/2;
            else kq = (n+1+1) * (long)(n/2) +1 ;
            System.out.println(kq);
        }
    }
    
}
