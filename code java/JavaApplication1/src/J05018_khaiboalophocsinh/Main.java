/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05018_khaiboalophocsinh;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int t =Integer.parseInt(in.nextLine());
        ArrayList<Hocsinh> ds = new ArrayList<>();
        for (int i = 0; i < t; i++) {
            Hocsinh tmp = new Hocsinh(i+1,in.nextLine(),in.nextLine());
            ds.add(tmp);
        }
        Collections.sort(ds);
        for (Hocsinh tmp:ds) {
            System.out.println(tmp);
        }
    }
}
