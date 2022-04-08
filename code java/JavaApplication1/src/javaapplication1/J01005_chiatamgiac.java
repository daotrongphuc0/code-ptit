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
public class J01005_chiatamgiac {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
            int n = in.nextInt(),h=in.nextInt();
            for (int i = 1; i <n; i++) {
                System.out.printf("%.6f ",h*(Math.sqrt((double)i/n)));
            }
            System.out.println("");
        }
    }
}
