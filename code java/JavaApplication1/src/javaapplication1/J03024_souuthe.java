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
public class J03024_souuthe {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        while(t-->0){
            String s = in.nextLine();
            boolean kt  = false;
           int demchan=0,demle=0;
            for (int i = 0; i < s.length(); i++) {
                int tmp = (int)s.charAt(i);
                if(tmp<48 || tmp >57){
                    kt = true ;
                    break;
                }
                else{
                    if(tmp %2 ==0) demchan++;
                    else demle++;
                }
            }
            if(kt) System.out.println("INVALID");
            else {
                if(s.length() %2==0){
                    if(demchan>demle) System.out.println("YES");
                    else System.out.println("NO");
                }
                else{
                    if(demle>demchan) System.out.println("YES");
                    else System.out.println("NO");
                }
            }
        }
    }
}
