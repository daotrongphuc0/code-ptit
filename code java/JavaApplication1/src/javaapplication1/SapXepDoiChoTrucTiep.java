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
public class SapXepDoiChoTrucTiep {
    public static void main(String[] args){
        Scanner in  =new Scanner(System.in);
        int t =in.nextInt();
        int mang[] = new int[t];
        for (int i = 0; i < t; i++) {
            mang[i] = in.nextInt();
        }
        int dem=0;
        for (int i = 0; i < t-1; i++) {
            boolean xd =false;
            for (int j = i+1; j < t; j++) {
                if(mang[i] > mang[j]) {
                    xd=true;
                    int tmp =mang[i];
                    mang[i]=mang[j];
                    mang[j]=tmp;
                }
            }
                if(xd){
                    dem++;
                    System.out.printf("Buoc %d: ",dem);
                    for (int k = 0; k < t; k++) {
                        System.out.printf("%d ",mang[k]);
                    }
                    System.out.println();
                }
            
        }
    }
}
