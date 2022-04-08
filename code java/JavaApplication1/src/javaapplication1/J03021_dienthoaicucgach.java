/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication1;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class J03021_dienthoaicucgach {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int  t = Integer.parseInt(in.nextLine());
        while(t-->0){
            StringBuilder tmp = new StringBuilder("");
            String s = in.nextLine();
            for (int i = 0; i < s.length(); i++) {
                tmp.append(kt(s.charAt(i)));
            }
            String kq = tmp.toString();
            String kq1 =tmp.reverse().toString();
            if(kq.compareTo(kq1) ==0 ) System.out.println("YES");
            else System.out.println("NO");
        }
    }
    public static char kt(char x){
        x = Character.toLowerCase(x);
        if(x == 'a' || x == 'b' || x == 'c') return '2';
        else{
            if(x == 'd' || x == 'e' || x == 'f') return '3';
            else{
                if(x == 'g' || x == 'h' || x == 'i') return '4';
                else{
                    if(x == 'j' || x == 'k' || x == 'l') return '5';
                    else{
                        if(x == 'm' || x == 'n' || x == 'o') return '6';
                        else{
                            if(x == 'p' || x == 'q' || x == 'r'|| x == 's') return '7';
                            else{
                                if(x == 't' || x == 'u' || x == 'v') return '8';
                                else return 9;
                            }
                        }
                    }
                }
            }
        }
    }
}
