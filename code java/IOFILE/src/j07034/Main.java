/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07034;

import java.io.*;
import java.util.*;

/**
 *
 * @author daotr
 */
public class Main {
    public static void main(String[] args) throws IOException {
        Scanner in  = new Scanner(new File("MONHOC.in"));
        ArrayList<Monhoc> ds = new ArrayList<>();
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            ds.add(new Monhoc(in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine())));
        }
        Collections.sort(ds);
        for(Monhoc i:ds){
            System.out.println(i);
        }
    }
}
