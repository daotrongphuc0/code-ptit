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
public class J02031_sapxepchongnguoc {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m[] = new int[n+2];
        for (int i = 0; i < n; i++) {
            m[i] = in.nextInt();
        }
        ArrayList<String> kq = new ArrayList<String>();
        for (int i = 0; i < n; i++) {
            int min =m[i],id =i;
            for (int j = i+1; j < n; j++) {
                if(m[j] < min) {
                    min=m[j];
                    id=j;
                }
            }
            int tmp =m[i];
            m[i]=m[id];
            m[id]=tmp;
            StringBuilder tmp1 = new StringBuilder("");
            tmp1.append("Buoc "+Integer.toString(i+1)+ ": ");
            for (int j = 0; j < n; j++) {
                tmp1.append(Integer.toString(m[j])+ " ");
            }
            kq.add(tmp1.toString());
        }
        for (int i = kq.size()-2; i >=0; i--) {
            System.out.println(kq.get(i));
        }
    }
}
