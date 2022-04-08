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
public class J02032_xapxepnoibotnguoc {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int m[] = new int[n+2];
            for (int i = 0; i < n; i++) {
                m[i] = in.nextInt();
            }
            ArrayList<String> kq = new ArrayList<String>();
            boolean check = true;
            int dem =0;
            while(check){
                check  = false;
                for (int i = 0; i < n-1; i++) {            
                    if(m[i]> m[i+1]){
                        check = true;
                        int tmp =m[i];
                        m[i]=m[i+1];
                        m[i+1]=tmp;
                    }
                }
                StringBuilder tmp1 = new StringBuilder("");
                tmp1.append("Buoc "+Integer.toString(dem+1)+ ": ");
                for (int j = 0; j < n; j++) {
                    tmp1.append(Integer.toString(m[j])+ " ");
                }
                kq.add(tmp1.toString()); 
                dem++;
            }
            for (int i = kq.size()-2; i >=0; i--) {
                System.out.println(kq.get(i));
            }           
        }
    }
}
