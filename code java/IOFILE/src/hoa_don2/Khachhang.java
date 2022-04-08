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
public class Khachhang {
    private String ma,ten,gt,ns,dc;

    public Khachhang() {
        this.ma = "";
        this.ten = "";
        this.gt = "";
        this.ns = "";
        this.dc = "";
    }

    
    public Khachhang(int i, String ten, String gt, String ns, String dc) {
        this.ma = "KH" +String.format("%03d", i);
        this.ten = ten;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
    }

    public String getTen() {
        return ten;
    }

    public String getDc() {
        return dc;
    }

    public String getMa() {
        return ma;
    }
    
    public static Khachhang timkh(ArrayList<Khachhang> l,String a){
        for(Khachhang tmp:l){
            if(a.equals(tmp.getMa())) return tmp;
        }
        
        return new Khachhang();
    }
    @Override
    public String toString() {
        return ma + " " + ten + " " + gt + " " + ns + " " + dc;
    }

    
    
}
