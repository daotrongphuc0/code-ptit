/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05033_sapxeptime;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        ArrayList<Time> m = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            Time tmp = Time.nextTime(in);
            m.add(tmp);           
        }
        //Collections.sort(m , (o1, o2) -> o1.compareTo(o2));
        for(Time tmp:m){
            System.out.println(tmp);
        }
    }
}
