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
public class j03010_diachiemail {
    public static void main(String[] args){
        Scanner  in  = new Scanner(System.in);
        String email[] =  new String[100];
        int i,j, n =Integer.parseInt(in.nextLine());
        for (i = 0; i < n; i++) {
            String hoten = in.nextLine().trim().toLowerCase();
            String ds[] = hoten.split("\\s+");
            StringBuilder tmp = new StringBuilder(ds[ds.length-1]);
            for (j = 0; j < ds.length-1;j++) {
                tmp.append(ds[j].charAt(0));
            }
            email[i] = tmp.toString();
        }
        for (i = 0; i < n; i++) {
            int dem =1;
            for (j   = i-1;  j>=0; j--) {
                if(email[i].equals(email[j])) dem++;
            }
            if(dem==1) System.out.print(email[i]);
            else System.out.print(email[i] +dem);
            System.out.println("@ptit.edu.vn");
        }
    }
}
