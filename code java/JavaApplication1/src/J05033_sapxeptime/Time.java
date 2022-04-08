/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05033_sapxeptime;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Time {
    private int h,m,s;

    public Time(int h, int m, int s) {
        m =m +s/60;
        s = s%60;
        h = h +m/60;
        this.h = h;
        this.m = m ;
        this.s = s;
    }

    public int getH() {
        return h;
    }

    public int getM() {
        return m;
    }

    public int getS() {
        return s;
    }

    public void setH(int h) {
        this.h = h;
    }

    public void setM(int m) {
        this.m = m;
    }

    public void setS(int s) {
        this.s = s;
    }
    
    public static Time nextTime(Scanner in){
        Time a = new Time(in.nextInt(),in.nextInt(),in.nextInt());
        return a;
    }
    
    
    public int compareTo(Time b){
        if(h > b.getH()) return 1;
        else {
            if(h < b.getH()) return -1;
            else{
                if(m > b.getM()) return 1;
                else{
                    if(m<b.getM()) return -1;
                    else{
                        if(s> b.getS()) return 1;
                        else{
                            if(s<b.getS()) return -1;
                            else return 0;
                        }
                    }
                }
            }
        }
    }

    @Override
    public String toString() {
        return h + " " + m + " " + s  ;
    }
}
