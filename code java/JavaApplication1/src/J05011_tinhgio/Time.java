/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05011_tinhgio;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Time {
    private int h,m;

    public Time(int h, int m) {
        this.h = h;
        this.m = m;
    }

    public int getH() {
        return h;
    }

    public int getM() {
        return m;
    }

    public void setH(int h) {
        this.h = h;
    }

    public void setM(int m) {
        this.m = m;
    }
    public int compare(Time b){
        if(h > b.getH()) return 1;
        else {
            if(h == b.getH()){
                if(m > b.getM()) return 1;
                else {
                    if(m == b.getM()) return 0;
                    else return -1;
                }
            }
            else return -1;
        }
    }
    public static Time hieu(Time a,Time b){
        int x=0,y=0;
        if(a.getM()<b.getM()){
            x = 60+a.getM()-b.getM();
            y=-1;
        }
        else x =a.getM()-b.getM();
        y += a.getH()-b.getH();
        Time tmp = new Time(y,x);
        return tmp;       
    }   
    public static Time nextTime(Scanner in){
        String s = in.nextLine();
        String ds[] = s.split(":");
        Time tmp = new Time(Integer.parseInt(ds[0]),Integer.parseInt(ds[1]));
        return tmp;
    }
    @Override
    public String toString() {
        return h + " gio " + m +" phut" ;
    }
    
}
