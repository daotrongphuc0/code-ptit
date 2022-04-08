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
public class J02020_lietketohop_1 {
    static boolean cauhinhcuoi = false;
    static int m[] = new int[12],n,k,i;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        n =in.nextInt();
        k =in.nextInt();
        for(i=1; i<=k; i++){
            m[i] =i;
        }
        int dem = 0;
        while(!cauhinhcuoi){
            print();
            sinh();
            dem++;
        }
        System.out.printf("Tong cong co " + dem + " to hop\n");
    }
    public static void print(){
        for(int j=1; j<=k; j++){
            System.out.printf(m[j]+ " ");
        }
        System.out.println();
        return;
    }
    public static void sinh(){
        i=k;
        while((i>0) && (m[i]==n-k+i))  i--;
        if(i==0){
        cauhinhcuoi=true;
         return;
        }
        m[i]=m[i]+1;
        for(int j=i+1; j<=k; j++) m[j]=m[i]+(j-i);
        return;
    }
    
}
