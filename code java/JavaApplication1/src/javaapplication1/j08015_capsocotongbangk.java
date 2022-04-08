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
aaaaaa
import java.util.*;
public class j08015_capsocotongbangk {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt(), k = in.nextInt();
            int[] m = new int[n+2];
            for (int i = 0; i < n; i++) {
                m[i] = in.nextInt();
            }
            int dem =0;
            for (int i = 0; i < n-1; i++) {
                for (int j = i; j < n; j++) {
                    if(m[i]+m[j] == k) dem++;
                }
            }
            System.out.println(dem);
        }
    }
}
