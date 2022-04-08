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
public class diemcanbang {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int t =in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int mang[] = new int[n];
            int sum =0;
            for (int i = 0; i < n; i++) {
                mang[i] = in.nextInt();
                sum+=mang[i];
            }
            int s1=mang[0];
            int index =-1;
            for (int i = 1; i < n-1; i++) {
                if(s1 == sum-mang[i]-s1) {
                    index=i+1;
                    break;
                }
                s1+=mang[i];
            }
            System.out.println(index);
        }
    }
}
