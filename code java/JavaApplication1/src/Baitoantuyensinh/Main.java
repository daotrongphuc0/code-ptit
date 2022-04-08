/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Baitoantuyensinh;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Main {
    public static void main(String[] args){
        Scanner in = new Scanner(System.in);
        Hocsinh a =new Hocsinh(in.nextLine(),in.nextLine(),Integer.parseInt(in.nextLine()),Integer.parseInt(in.nextLine()),Integer.parseInt(in.nextLine()));
        System.out.println(a);
    }
}
