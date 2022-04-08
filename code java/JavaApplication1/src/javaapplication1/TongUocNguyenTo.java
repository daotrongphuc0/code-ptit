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
public class TongUocNguyenTo {
    public static void main(String[] args){
        long arr[] = new long[2000005];
        for (int i = 0; i < 2000001; i++) {
            arr[i] =0;
        }
        arr[3]=(long)3;
        arr[2]=(long)2;
        for (int i = 2; i <= 2000000; i++){
            for (int j = 2; j <= 2000000/i; j++) {
                if(arr[i]==0) arr[i]=i;
                if(arr[j]!=0 && i*j<=2000000) arr[i*j]=arr[i]+arr[j];
            }
            if(arr[i]==0) arr[i]=i;
        }
        Scanner in =new Scanner(System.in);
        int n =in.nextInt();
        long ans =0;
        while(n-->0){
            int x =in.nextInt();
            ans+= arr[x];
        }
        System.out.println(ans);
    }
}
