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
public class phantichthuaasont {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t  = in.nextInt();
        for (int x = 1; x <=t   ; x++) {
            int n = in.nextInt();
            System.out.printf("Test %d: ",x);
            for (int i = 2; i <= n; i++) {
                int dem =0;
                while(n%i==0){
                    dem++;
                    n/=i;
                }
                if(dem!=0) System.out.printf("%d(%d) ",i,dem);
            }
            System.out.println();
        }
    }
}
