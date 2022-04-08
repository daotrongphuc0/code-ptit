/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

import java.util.Scanner;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class DemSoLanXuatHien {
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        int t = in.nextInt();
        for(int x =1;x<=t;x++){
            int n = in.nextInt();
            int mang[] =new int[n];
            int ktra[] = new int[n];
            for (int i = 0; i < n; i++) {
                mang[i] =in.nextInt();
                ktra[i]=0;
            }
            System.out.printf("Test %d:\n",x);
            for (int i = 0; i < n; i++) {
                if(ktra[i]==0){
                int dem =0;
                for (int j = i+1; j < n; j++) {
                    if(mang[i] == mang[j]) {
                        ktra[j] = -1;
                        dem++;
                    }
                }
                System.out.printf("%d xuat hien %d lan\n",mang[i],dem+1);
                }
            }
        }
    }
}
