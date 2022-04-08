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
public class Ofile {
    public static void main(String[] args) throws IOException {
        DataOutputStream out = new DataOutputStream(new FileOutputStream("DATA.in"));
        for (int i = 0; i < 10; i++) {
            out.writeInt(i);
        }
        out.close();
    }
}
