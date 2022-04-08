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
public class j02103_tichmatranvoichuyenvicuano {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for (int z = 1; z <=t; z++) {
            int n =in.nextInt(), m= in.nextInt();
            int mang[][] = new int[n+5][m+5];
            int mangcv[][] = new int[m+5][n+5];
            int kq[][] = new int[n+5][n+5];
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    mang[i][j] = in.nextInt();
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    mangcv[j][i] = mang[i][j];
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    for(int l = 0; l < m; l++) {
                        kq[i][j] += mang[i][l] * mangcv[l][j];
                    }
                }
            }
            System.out.println("Test " + z +":");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    System.out.print( kq[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
}
