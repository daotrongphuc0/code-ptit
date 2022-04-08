/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07034;

/**
 *
 * @author daotr
 */
import java.util.*;
import java.io.*;
public class j07016 {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        ObjectInputStream d1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream d2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> l1 = (ArrayList<Integer>) d1.readObject();
        ArrayList<Integer> l2 = (ArrayList<Integer>) d2.readObject();
        d1.close();d2.close();
        int[] a1 = new int[10001];
        int[] a2 = new int[10001];
        for(Integer i:l1){
            a1[i]++;
        }
        for(Integer i:l2){
            a2[i]++;
        }
        //Collections.sort(l1);
        for(int i =0 ; i<10001;i++){
            if(a1[i] !=0 && a2[i] !=0 && ktnt(i)){
                System.out.println(i + " "+ a1[i] + " " +a2[i]);
            }
        }
    }
    public static boolean ktnt(int n){
        if(n<2) return false;
        for (int i = 2; i <= (int)Math.sqrt(n); i++) {
            if(n%i ==0) return false;
        }
        return true;
    }
}
