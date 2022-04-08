/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04015_tinhthunhapgiavien;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Giaovien a = new Giaovien(in.nextLine(),in.nextLine(),Long.parseLong(in.nextLine()));
        System.out.println(a);
    }
}
