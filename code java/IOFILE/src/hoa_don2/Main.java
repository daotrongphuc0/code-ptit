/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hoa_don2;

/**
 *
 * @author daotr
 */
import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner inkh = new Scanner(new File("KH.in"));
        Scanner inmh = new Scanner(new File("MH.in"));
        Scanner inhd = new Scanner(new File("HD.in"));
        int nkh = Integer.parseInt(inkh.nextLine());
        int nmh = Integer.parseInt(inmh.nextLine());
        int nhd = Integer.parseInt(inhd.nextLine());
        ArrayList<Khachhang> kh = new ArrayList<>();
        ArrayList<Mathang> mh = new ArrayList<>();
        ArrayList<Hoadon> hd = new ArrayList<>();
        for(int i = 0;i<nkh;i++){
            Khachhang tmp = new Khachhang(i+1,inkh.nextLine(),inkh.nextLine(),inkh.nextLine(),inkh.nextLine());
            kh.add(tmp);
        }
        for(int i = 0;i<nmh;i++){
            Mathang tmp = new Mathang(i+1,inmh.nextLine(),inmh.nextLine(),Integer.parseInt(inmh.nextLine()),Integer.parseInt(inmh.nextLine()));
            mh.add(tmp);
        }
        for(int i = 0;i<nhd;i++){
            Hoadon tmp = new Hoadon(i+1,inhd.nextLine());
            hd.add(tmp);
        }
        for(Hoadon i:hd){
            Khachhang a = Khachhang.timkh(kh, i.getMakh());
            Mathang b = Mathang.timmh(mh, i.getMamh());
            System.out.println(i.getMahd()+" "+a.getTen()+" "+a.getDc()+" "+b.getTen()+" "+b.getDv()+" "+Integer.toString(b.getGiamua())+" "+Integer.toString(b.getGiaban())+" "+Integer.toString(i.getSl())+" "+Integer.toString(i.getSl()*b.getGiaban()));
        }
    }
}
