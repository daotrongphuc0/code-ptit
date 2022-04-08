/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ASUS
 */
import java.util.*;
import java.math.*;
public class J01013 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n =in.nextInt();
        while(n-->0){
            BigInteger a =in.nextBigInteger();
            BigInteger b =in.nextBigInteger();
            System.out.println(hieutd(a,b));
        }
    }
    
    public static String hieutd(BigInteger a,BigInteger b){
        BigInteger kq = new BigInteger("0");
        if(a.compareTo(b)== 1)
            kq = a.subtract(b);
        else 
            kq = b.subtract(a);
        StringBuilder kq1 = new StringBuilder(kq.toString());
        int x = Math.max(a.toString().length(),b.toString().length());
        while(x > kq1.length()){
            kq1.insert(0,"0");
        }
        return kq1.toString();
    }
    
}
