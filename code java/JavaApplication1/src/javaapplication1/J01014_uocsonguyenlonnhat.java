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
public class J01014_uocsonguyenlonnhat {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            for (int i = 2; i < Math.sqrt(n); i++) {
                while(n%i==0){
                    n/=i;
                }
            }
            System.out.println(n);
        }
    }
}
