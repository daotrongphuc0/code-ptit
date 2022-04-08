/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package j04003_phanso;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        Phanso a = new Phanso(in.nextLong(), in.nextLong());
        Phanso b = new Phanso(in.nextLong(), in.nextLong());
        a.tong(b);
        System.out.println(a);
    }
}
 