/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thi;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;

/**
 *
 * @author daotr
 */
public class tongchuso {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        FileInputStream fin = new FileInputStream("DATA.in");
        ObjectInputStream in = new ObjectInputStream(fin);
        ArrayList<String> ds = (ArrayList<String>) in.readObject();
        in.close();
        //ArrayList<String> ds = new ArrayList<>();
        //ds.add("aaaaa00aaa123");
        //ds.add("aab12ccc3n4");
        for(String tmp:ds){
            String s ="0";
            for (int i = 0; i < tmp.length(); i++) {
                try{
                    int x = Integer.parseInt(tmp.substring(i, i+1));
                    s += Integer.toString(x);
                }catch(NumberFormatException e){
                    continue;
                }
            }
            StringBuilder s1 = new StringBuilder(s);
            while(s1.charAt(0) == '0'){
                s1.deleteCharAt(0);
            }
            s= s1.toString();
            int tong =0;
            for (int i = 0; i < s.length(); i++) {
                tong += (int) s.charAt(i)-48;
            }
            System.out.println(s + " " + tong);
        }

    }
}
