/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thi;

/**
 *
 * @author daotr
 */
import java.util.*;
import java.io.*;
public class Ghepma {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        FileInputStream fin = new FileInputStream("DATA1.in");
        ObjectInputStream oin = new ObjectInputStream(fin);
        ArrayList<String> l1 = (ArrayList<String>) oin.readObject();
        oin.close();
        
        FileInputStream fin1 = new FileInputStream("DATA2.in");
        ObjectInputStream oin1 = new ObjectInputStream(fin1);
        ArrayList<Integer> l2 = (ArrayList<Integer>) oin1.readObject();
        oin1.close();
        
        ArrayList<String> kq = new ArrayList<>();
        ArrayList<String> kq2 = new ArrayList<>();
        for(String tmp:l1){
            for(int x:l2){
                kq.add(tmp + String.format("%03d", x));
            }
        }
        
        Collections.sort(kq);
        HashMap<String,Integer> kq1 = new HashMap<>();
        for(String tmp:kq){
            if(!kq1.containsKey(tmp)){
                kq1.put(tmp,0);
            }
        }
        for(String s:kq1.keySet()){
            kq2.add(s);
        }
        Collections.sort(kq2);
        for(String s1:kq2){
            System.out.println(s1);
        }
            
        
    }
}
