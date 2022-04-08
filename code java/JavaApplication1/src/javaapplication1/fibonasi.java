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
public class fibonasi {
    public static void main(String[] args){
       Scanner in = new Scanner(System.in);
       int t = in.nextInt();
       long m[] = new long[95];
       m[1]=1;
       m[2]=1;
        for (int i = 3; i <=92 ; i++) {
            m[i]=m[i-1] +m[i-2];
        }
       while(t-- >0){
           int n = in.nextInt();
           System.out.println(m[n]);
       }
    }
}
