/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bangsinhvien;

/**
 *
 * @author ASUS
 */
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.*;
public class SinhVien {
    private String msv,name,lop,email;

    public SinhVien(int n,String name, String lop, String email) {
        this.msv = "B20DCCN"+ String.format("%03d", n);
        this.name = name;
        this.lop = lop;
        this.email = email;
    }

    public static String[][] readData() throws IOException{
        String[][] s = new String[50][50];
        File f = new File("sinhvien.txt");
        Scanner in = new Scanner(f);
        int n = Integer.parseInt(in.nextLine());
        for (int i = 0; i < n; i++) {
            s[i][0] = in.nextLine();
            s[i][1] = in.nextLine();
            s[i][2] = in.nextLine();
            s[i][3] = in.nextLine();        
        }
        return s;
        
    }
    @Override   
    
    public String toString() {
        return msv + " " + name + " " + lop + " " + email;
    }
    
}
