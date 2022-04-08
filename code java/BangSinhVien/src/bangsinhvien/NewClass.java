/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package bangsinhvien;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

/**
 *
 * @author daotr
 */
public class NewClass {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("sinhvien.txt");
        Scanner in = new Scanner(f);
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; i++) {
            System.out.println(in.nextLine());        
            System.out.println(in.nextLine());
            System.out.println(in.nextLine());
            System.out.println(in.nextLine());
        }
    }
}
