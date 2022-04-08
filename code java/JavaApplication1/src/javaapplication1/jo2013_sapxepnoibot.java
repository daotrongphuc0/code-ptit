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
public class jo2013_sapxepnoibot {
    public static void main(String[] args){
        Scanner in  = new Scanner(System.in);
        int n  = in.nextInt();
        int m[] = new int[n+5];
        for (int i = 0; i < n; i++) {
            m[i] = in.nextInt();
        }
        boolean  kt  = true;
        int dem =1;
        while(kt){
            kt =  false;
            for (int i = 0; i < n-1; i++) {
                if(m[i] > m[i+1]){
                    kt = true;
                    int tmp =  m[i];
                    m[i] = m[i+1];
                    m[i+1] = tmp;
                }    
            }
            if(kt){
                System.out.print("Buoc " + dem +": ");
                for (int i = 0; i < n; i++) {
                    System.out.print(m[i] +" ");
                }
                System.out.println("");
            }
            dem++;
        }
    }
}
