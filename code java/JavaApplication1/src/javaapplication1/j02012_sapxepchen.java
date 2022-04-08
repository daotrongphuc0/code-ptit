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
public class j02012_sapxepchen {
    public static void main(String[] args){
        Scanner in  =new Scanner (System.in);
        int n = in.nextInt();
        int m[] = new int[n+5];
        for (int i = 0; i < n; i++) {
            m[i] = in.nextInt();
        }
        for (int i = 0; i < n; i++) {
            System.out.print("Buoc " + i+": ");
            sapxep(m,i+1);
        }
    }
    public static void sapxep(int m[],int n){
        for (int i = 0; i <n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if(m[i] > m[j]){
                    int tmp = m[i];
                    m[i] = m[j];
                    m[j] = tmp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            System.out.print(m[i] +" ");
        }
        System.out.println("");
    }
}
