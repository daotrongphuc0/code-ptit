/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iofile;

/**
 *
 * @author daotr
 */
import java.io.*;
import java.util.*;
public class hellofile {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("Hello.txt"));
        while(in.hasNextLine()){
            String tmp = in.nextLine();
            System.out.println(tmp);
        }
    }
            
}
