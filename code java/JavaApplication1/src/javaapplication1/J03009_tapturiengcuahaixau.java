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
public class J03009_tapturiengcuahaixau {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t  = Integer.parseInt(in.nextLine());
        while(t-->0){
            String s1 =in.nextLine();
            String s2 =in.nextLine();
            System.out.println(xuli(s1,s2));
        }
    }
    public static String xuli(String s1,String s2){
        String ds1[] = s1.split("\\s+");
        String ds2[] = s2.split("\\s+");
        String[] kq= new String[ds1.length];
        int dem =0;
        for (int i = 0; i < ds1.length; i++) {
            boolean kt = true; // kt co thuoc s1 k ?
            for (int j = 0; j < ds2.length; j++) {
                if(ds1[i].equals(ds2[j])) {
                    kt = false;
                    break;
                }
            }
            // kt co bi trung trong tap ket qua k ?
            if(kt){
                boolean kttrung =true;
                for (int x = 0; x < dem; x++) {
                    if(ds1[i].equals(kq[x])){
                        kttrung =false; 
                        break;
                    }
                }
                if(kttrung){
                    kq[dem] = ds1[i];
                    dem++;
                }
            }
        }
       Arrays.sort(kq,0,dem);
        // ghep ket qua
        StringBuilder kq1 = new StringBuilder("");
        for (int i = 0; i < dem; i++) {
            if(i != dem-1) kq1.append(kq[i] + " ");
            else kq1.append(kq[i]);
        }
        return kq1.toString();
    }
}
