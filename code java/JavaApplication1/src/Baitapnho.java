/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Baitapnho {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean check = true;
        int gpa;
        while(check){
            try{
                System.out.print("Nhap dau vao gpa:");
                gpa = in.nextInt();
                if(gpa>=0 && gpa <= 4) check =false;
            }
            catch(NumberFormatException e){
                System.out.println("Sai du lieu dinh dang, vui long nhap lai.");
            }
        }
    }
}
