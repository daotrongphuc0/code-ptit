/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thi;

import java.io.*;
import java.util.*;

/**
 *
 * @author daotr
 */
public class tenvietta {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DANHSACH.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<String> ds = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            ds.add(in.nextLine());
        }
        int t1 = Integer.parseInt(in.nextLine());
        ArrayList<String> ds1 = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            ds1.add(in.nextLine());
        }
    }
}
