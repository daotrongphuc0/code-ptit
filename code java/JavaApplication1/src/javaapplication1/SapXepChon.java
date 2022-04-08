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
public class SapXepChon {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int mang[] =new int[n];
        for (int i = 0; i < n; i++) {
            mang[i] = in.nextInt();
        }
        for (int i = 0; i < n-1; i++) {
            int min =mang[i],id =i;
            for (int j = i+1; j < n; j++) {
                if(mang[j] < min) {
                    min=mang[j];
                    id=j;
                }
            }
            int tmp =mang[i];
            mang[i]=mang[id];
            mang[id]=tmp;
            System.out.printf("Buoc %d: ",i+1);
            for (int k = 0; k < n; k++) {
                System.out.printf("%d ",mang[k] );
            }
            System.out.println();
        }
    }
}
