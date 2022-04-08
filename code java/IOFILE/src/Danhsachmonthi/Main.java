/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Danhsachmonthi;

/**
 *
 * @author daotr
 */
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in =new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Monthi> ds = new ArrayList<>();
        while(t-->0){
            Monthi tmp = new Monthi(in.nextLine(),in.nextLine(),in.nextLine());
            ds.add(tmp);
        }
        Collections.sort(ds);
        for(Monthi tmp:ds){
            System.out.println(tmp);
        }
    }
}
