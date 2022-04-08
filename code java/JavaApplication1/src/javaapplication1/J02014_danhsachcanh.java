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
public class J02014_danhsachcanh {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m[][] = new int[n+5][n+5];
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                m[i][j] =in.nextInt();
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = i+1; j <= n; j++) {
                if(m[i][j] == 1) System.out.printf("(" + i+","+j+")\n");
            }
        }
    }
}
