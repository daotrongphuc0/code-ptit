/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package iofile;

/**
 *
 * @author daotr
 */
import java.util.*;
import java.io.*;
public class j07004 {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(new File("DATA.in"));
        ArrayList<Integer> l = new ArrayList<>();
        while(in.hasNextInt()){
            l.add(in.nextInt());
        }
        Collections.sort(l);
        Map<Integer,Integer> m = new HashMap<>();
        for(Integer i:l){
            if(m.containsKey(i)){
                m.put(i,m.get(i)+1);
            }
            else {
                m.put(i, 1);
            }
        }
        for(Integer i:m.keySet()){
            System.out.println(i + " " + m.get(i));
        }
    }
}
