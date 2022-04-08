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
import java.math.*;
public class J03016_chiahetcho11 {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        BigInteger so11 = new BigInteger("11");
        int t  =in.nextInt();
        while(t-->0){
            BigInteger a = in.nextBigInteger();
            BigInteger kt = a.divide(so11);
            if(a.compareTo(kt.multiply(so11)) ==0) System.out.println(1);
            else System.out.println(0);
        }
    }
}
