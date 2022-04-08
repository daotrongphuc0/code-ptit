/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package File;

/**
 *
 * @author daotr
 */
import java.util.*;
import java.io.*;
public class J07004_sokhacnhautrongfile {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        FileInputStream is = new FileInputStream("src/File/Data.in");
        DataInputStream dis = new DataInputStream(is);
        List<Integer> a = new ArrayList<>();
        //Object o = null;
        boolean eof = false;
        while (!eof){
           try {
               int o = dis.readInt();
               a.add(o);
           }catch (EOFException e){
               eof = true;
           }
        }
        dis.close();
        Collections.sort(a);
        Map<Integer, Integer> m = new LinkedHashMap<>();
        for (Integer i : a){
            if (m.containsKey(i)){
                m.put(i, m.get(i)+1);
            }else{
                m.put(i,1);
            }
        }
        for(Integer i: m.keySet()){
            System.out.println(i+" "+m.get(i));
        }
    }
}
