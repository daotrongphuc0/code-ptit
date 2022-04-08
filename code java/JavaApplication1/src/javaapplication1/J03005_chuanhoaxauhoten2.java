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
public class J03005_chuanhoaxauhoten2 {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        int  n = Integer.parseInt(in.nextLine());
        while(n-->0){
            String s = in.nextLine();
            System.out.println(chuanhoa(s));
        }
    }
    public static String chuanhoa(String s){
        StringBuilder kq = new StringBuilder("");
        s= s.trim().toLowerCase();
        String ds[] = s.split("\\s+");
        for (int i = 1; i < ds.length; i++) {
            kq.append(Character.toUpperCase(ds[i].charAt(0)));
            for (int j = 1; j < ds[i].length(); j++) {
                kq.append(Character.toLowerCase(ds[i].charAt(j)));
            }
            if(i == ds.length-1) kq.append(", ");
            else kq.append(" ");
        }
        kq.append(ds[0].toUpperCase());
        return kq.toString();
    }
}
