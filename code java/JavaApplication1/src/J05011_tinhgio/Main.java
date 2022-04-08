/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05011_tinhgio;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Gamer> ds =new ArrayList<>();
        for (int i = 0; i < t; i++) {
            Gamer tmp = new Gamer(in.nextLine(),in.nextLine(),Time.nextTime(in),Time.nextTime(in));
            ds.add(tmp);
        }
        Collections.sort(ds);
        for (int i = ds.size()-1; i >=0; i--) {
            System.out.println(ds.get(i));
        }
    }
}
