/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package j04007_khaibaolopnhanvien;

/**
 *
 * @author ASUS
 */
import java.text.ParseException;
import java.util.*;
public class Main {
    public static void main(String[] args) throws ParseException{
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Nhanvien> ds = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            Nhanvien nv = new Nhanvien(i+1,in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine());
            ds.add(nv);
        }
        Collections.sort(ds , (a,b) -> a.comparaTo(b));
        for(Nhanvien tmp:ds) {
            System.out.println(tmp);
        }
    }
}
