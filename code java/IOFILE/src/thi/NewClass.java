/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thi;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author daotr
 */
public class NewClass {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        ArrayList<String> kq = new ArrayList<>();
        ArrayList<String> kq2 = new ArrayList<>();
        ArrayList<String> l1 = new ArrayList<>();
        ArrayList<Integer> l2 = new ArrayList<>();
        l1.add("AAAAA");
        l1.add("AAAAA");
        l1.add("BBBBB");
        l2.add(111);
        l2.add(22);
        for(String tmp:l1){
            for(int x:l2){
                kq.add(tmp + String.format("%03d", x));
            }
        }
        
        HashMap<String,Integer> kq1 = new HashMap<>();
        for(String tmp:kq){
            if(!kq1.containsKey(tmp)){
                kq1.put(tmp,0);
            }
        }
        
        for(String s:kq1.keySet()){
            kq2.add(s);
        }
        Collections.sort(kq2);
        for(String s1:kq2){
            System.out.println(s1);
        }
    }
}
