/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package danhsachcathi;

import java.io.*;
import java.util.*;

/**
 *
 * @author daotr
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in =new Scanner(new File("CATHI.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Cathi> ds = new ArrayList<>();
        for(int i =0;i<t;i++){
            Cathi tmp = new Cathi(i+1,in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine()));
            ds.add(tmp);
        }
        Collections.sort(ds);
        for(Cathi tmp:ds){
            System.out.println(tmp);
        }
    }
}
