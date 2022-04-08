/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Test;

import java.util.*;


public class Main {

    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Khaibao a = new Khaibao(in.nextLine(),in.nextLine(),in.nextLine(),Float.parseFloat(in.nextLine()));
        System.out.println(a);
    }
}
