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
public class Mangdoixung {
    public static void main(String[] args){
        Scanner in =new Scanner(System.in);
        int t = in.nextInt();
        while(t-- >0){
            int n = in.nextInt();
            int mang[] =new int[n];
            for (int i = 0; i < n; i++) {
                mang[i] =in.nextInt();
            }
            int x= n/2;
            boolean kt = true;
            for (int j = 0; j < x; j++) {
                if(mang[j] != mang[n-j-1]) {kt= false; break;}
            }
            if(kt) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
