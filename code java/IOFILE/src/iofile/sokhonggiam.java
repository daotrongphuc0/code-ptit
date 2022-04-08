/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iofile;

/**
 *
 * @author daotr
 */
import java.io.*;
import java.util.*;
public class sokhonggiam {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream d1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream d2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> l1 = (ArrayList<Integer>) d1.readObject();
        ArrayList<Integer> l2 = (ArrayList<Integer>) d2.readObject();
        d1.close();d2.close();
        Map<Integer,Integer> m1 = new HashMap<>();
        Map<Integer,Integer> m2 = new HashMap<>();
        Collections.sort(l1);
        for(Integer i:l1){
            if(m1.containsKey(i)){
                m1.put(i, m1.get(i)+1);
            }
            else {
                m1.put(i, 1);
            }
        }
        for(Integer i:l2){
            if(m2.containsKey(i)){
                m2.put(i, m2.get(i)+1);
            }
            else {
                m2.put(i, 1);
            }
        }
        for(Integer i:m1.keySet()){
            if(m2.get(i) !=0 && sokhonggiam(i)){
                System.out.println(i + " "+ m1.get(i) + " " +m2.get(i));
            }
        }
    }
    public static boolean sokhonggiam(int n){
        String s = Integer.toString(n);
        for (int i = 0; i < s.length()-1; i++) {
            if(s.charAt(i) > s.charAt(i+1)) return false;
        }
        return true;
    }
}
