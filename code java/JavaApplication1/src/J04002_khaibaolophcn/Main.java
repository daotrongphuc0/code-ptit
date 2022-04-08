/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04002_khaibaolophcn;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        String s =in.nextLine();
        s = s.trim();
        String ds[] = s.split("\\s+");
        if(ds.length>3) ds[2] = "INVALID";
        Rectange a = new Rectange(Long.parseLong(ds[0]),Long.parseLong(ds[1]),ds[2]);
        System.out.println(a);
    }
}

