/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04006_khaibaolopsinhvien;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(in.nextLine());
        ArrayList<Sinhvien> ds= new ArrayList<>();
        for (int i = 1; i <= n; i++) {
           Sinhvien sv = new Sinhvien(i,in.nextLine(),in.nextLine(),in.nextLine(),Float.parseFloat(in.nextLine()));
           ds.add(sv);
        }
        Collections.sort(ds , (o1, o2) -> o1.compareTo(o2));
        for (Sinhvien tmp:ds) {
            System.out.println(tmp);
        }
    }    
}
