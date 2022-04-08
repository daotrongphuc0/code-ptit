/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dangki;

import java.io.*;
import java.util.*;

/**
 *
 * @author daotr
 */
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Mon> ds = new ArrayList<>();
        while(t-->0){
            ds.add(new Mon(in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine()),in.nextLine(),in.nextLine()));
        }
        Collections.sort(ds);
        for(Mon tmp:ds){
            if(tmp.getTh().compareTo("Truc tiep") !=0){
                System.out.println(tmp);
            }
        }
    }
}
