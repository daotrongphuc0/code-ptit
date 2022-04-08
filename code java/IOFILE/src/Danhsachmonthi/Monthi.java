/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Danhsachmonthi;

/**
 *
 * @author daotr
 */
public class Monthi implements Comparable<Monthi>{
    private String ma,mon,cachthi;

    public Monthi(String ma, String mon, String cachthi) {
        this.ma = ma;
        this.mon = mon;
        this.cachthi = cachthi;
    }

    @Override
    public int compareTo(Monthi o) {
        return ma.compareTo(o.ma);
    }

    @Override
    public String toString() {
        return ma + " " + mon + " " + cachthi ;
    }
    
}
