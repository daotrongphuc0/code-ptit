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
public class Hocsinh {
    private String ma,name;
    private float toan,li,hoa;

    public Hocsinh(String ma, String name, float toan, float li, float hoa) {
        this.ma = ma;
        this.name = name;
        this.toan = toan;
        this.li = li;
        this.hoa = hoa;
    }
    private float diemcong(){
        char m =ma.charAt(2);
        float kq=0;
        if (m == '1') kq=(float)0.5;
        if (m == '2') kq=(float)1;
        if (m == '3') kq=(float)2.5;
        return kq;
    }
    private float diem(){
        return toan*2+li+hoa;
    }
    private String ketqua(){
        float d = diem() +diemcong();
        if(d >=24 ) return "TRUNG TUYEN";
        return "TRUOT";
    }
    @Override
    public String toString() {
        return ma + " " + name +" " + String.format("%.1f", diem())+" " +ketqua();
    }
    
}
