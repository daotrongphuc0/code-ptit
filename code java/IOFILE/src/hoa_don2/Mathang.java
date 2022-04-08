/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hoa_don2;

import java.util.ArrayList;

/**
 *
 * @author daotr
 */
public class Mathang {
    private String ma,ten,dv;
    private int giamua,giaban;
    
    public Mathang() {
        this.ma = "" ;
        this.ten = "";
        this.dv = "";
        this.giamua = 0;
        this.giaban = 0;
    }
    
    public Mathang(int n, String ten, String dv, int giamua, int giaban) {
        this.ma = "MH" + String.format("%03d", n);
        this.ten = ten;
        this.dv = dv;
        this.giamua = giamua;
        this.giaban = giaban;
    }

    public String getMa() {
        return ma;
    }

    public String getTen() {
        return ten;
    }

    public String getDv() {
        return dv;
    }

    public int getGiamua() {
        return giamua;
    }

    public int getGiaban() {
        return giaban;
    }
    
    public static Mathang timmh(ArrayList<Mathang> l,String a){
        for(Mathang tmp:l){
            if(a.equals(tmp.getMa())) return tmp;
        }
        return new Mathang();
    }
    @Override
    public String toString() {
        return ma + " " + ten + " " + dv + " " + giamua + " " + giaban  ;
    }
    
}
