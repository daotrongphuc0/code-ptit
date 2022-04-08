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
public class copy {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0){
            long n = in.nextLong();
            int res = 0, i=2;
            while(n>1){
                int dem=0;
                while(n%i == 0){
                    dem++;
                    n/=i;
                }
                if(i==2) res = dem;
                else res *= (dem+1);
                i++;
            }
            System.out.println(res);
        }
    }
}
