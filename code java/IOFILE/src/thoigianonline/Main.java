/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thoigianonline;

import java.io.*;
import java.util.*;

/**
 *
 * @author daotr
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("ONLINE.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Sinhvien> ds = new ArrayList<>();
        while(t-->0){
            ds.add(new Sinhvien(in.nextLine(),in.nextLine(),in.nextLine()));
        }
        Collections.sort(ds);
        for(Sinhvien tmp:ds){
            System.out.println(tmp);
        }
    }
}
