/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package danhsachcathi;

/**
 *
 * @author daotr
 */
public class Cathi implements Comparable<Cathi>{
    private String maca,ngay,time;
    private int phong;

    public Cathi(int i, String ngay, String time, int phong) {
        this.maca = "C00"+ Integer.toString(i);
        this.ngay = ngay;
        this.time = time;
        this.phong = phong;
    }

    @Override
    public int compareTo(Cathi o) {
        if(time == o.time){
            return maca.compareTo(o.maca);
        }
        else return time.compareTo(o.time);
    }

    @Override
    public String toString() {
        return  maca + " " + ngay + " " + time + " " + phong ;
    }
    
}
