/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Test;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Test1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            String a = in.nextLine();
            System.out.println(xl(a));
        }
    }
    public static String xl(String a){
        int check = 0;
        int i = 0;
        int k = a.length();
        int l = k;
        while(true){
            if(check > 1) break;
            if(i>k) break;
           
            if (a.charAt(i) != a.charAt(k-1)){
               check++;
            }
            i++;k--;
       }
       if(check == 1)return "YES";
       else if(check == 0 & l%2==1) return "YES";
       else return "NO";
    }
}
