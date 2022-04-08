/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thoigianonline;

/**
 *
 * @author daotr
 */
public class Sinhvien implements Comparable<Sinhvien>{
    private String ten;
    private int phut;

    public Sinhvien(String ten, String t1, String t2) {
        this.ten = ten;
        Time tbd = new Time(t1);
        Time tkt = new Time(t2);
        this.phut= tkt.tinhphut(tbd);
        
    }
    @Override
    public int compareTo(Sinhvien o){
        if(phut == o.phut){
            return ten.compareTo(o.ten);
        }
        else return phut -o.phut;
    }
    @Override
    public String toString() {
        return ten+" "+phut;
    }
    
    
}
