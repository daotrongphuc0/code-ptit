/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package test;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Test {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        
        while(t-- >0){
            boolean check = false;
            int n = in.nextInt();
            int []a = new int[n+5];
            for(int i = 0; i < n; i++){
                a[i] = in.nextInt();
            }
            int tong = 0 ;
            for(int i = 0; i < n; i++){
                tong = tong + a[i];
            }
            int left = 0;
            int right = tong-a[0];
            for(int i = 1; i < n; i++){
                left = left + a[i-1];
                right = right - a[i];
                if (left == right) {
                    System.out.println(i+1);
                    check  = true;
                    break;
                    
                }
               
            }
            if(!check) System.out.println(-1);
            
        }
    }
}