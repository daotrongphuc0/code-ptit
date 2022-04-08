/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05020_sapxepdanhsachhocsinh;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //int t = Integer.parseInt(in.nextLine());
        ArrayList<Hocsinh> ds = new ArrayList<>();
        while(in.hasNextLine()){
            Hocsinh tmp = new Hocsinh(in.nextLine(),in.nextLine(),in.nextLine(),in.nextLine());
            ds.add(tmp);
            System.out.println(tmp);
        }
        Collections.sort(ds);
        for(Hocsinh tmp:ds){
            System.out.println(tmp);
        }
    }
}
