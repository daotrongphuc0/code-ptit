/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package danhsachcathi;

/**
 *
 * @author daotr
 */
public class Time implements Comparable<Time>{
    private int gio,phut;

    public Time(String s) {
        String[] ds = s.split(":");
        this.gio = Integer.parseInt(ds[0]);
        this.phut = Integer.parseInt(ds[1]);
    }

    @Override
    public int compareTo(Time o) {
        if(gio != o.gio) return gio-o.gio;
        else{
            return phut-phut;
        }
    }

    @Override
    public String toString() {
        String g = Integer.toString(gio);
        if(g.length()==1) g = "0" + g;
        String p = Integer.toString(phut);
        if(p.length()==1) p = "0" + p;
        return g + ":" + p  ;
    }
    
}
