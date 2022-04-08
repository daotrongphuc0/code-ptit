/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package j07034;

/**
 *
 * @author daotr
 */
public class Monhoc implements Comparable<Monhoc>{
    private String name,ma;
    private int stc;

    public Monhoc(String ma, String name, int stc) {
        this.name = name;
        this.ma = ma;
        this.stc = stc;
    }

    @Override
    public String toString() {
        return ma+ " " + name + " " + stc;
    }

    @Override
    public int compareTo(Monhoc o) {
        return this.name.compareTo(o.name);
    }
    
}
