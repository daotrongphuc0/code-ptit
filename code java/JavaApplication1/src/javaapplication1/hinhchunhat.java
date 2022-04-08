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
public class hinhchunhat {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- >0){
            int n = in.nextInt();
            if(nguyento(n)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    public static boolean nguyento(int n){
        if(n <= 1) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if(n%i==0) return false;
        }
        return true;
    }
}