/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iofile;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author daotr
 */
public class j07021 {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("DATA.in"));
        while(in.hasNextLine()){
            String s = in.nextLine().trim().toLowerCase();
            if(s.equals("end")) break;
            String[] ds = s.split("\\s+");
            String res = "";
            for(String i:ds){
                res += Character.toUpperCase(i.charAt(0)) + i.substring(1);
            }
            System.out.println(res);
        }
    }
}
