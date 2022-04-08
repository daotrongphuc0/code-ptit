/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04005_khaibaolopthisinh;

/**
 *
 * @author ASUS
 */
public class Sinhvien {
    private String  name,date;
    private float m1,m2,m3;

    public Sinhvien(String name, String date, float m1, float m2, float m3) {
        this.name = name;
        this.date = xuli(date);
        this.m1 = m1;
        this.m2 = m2;
        this.m3 = m3;
    }
    private String xuli(String ns){
        String day[] = ns.split("/");
        if(day[0].length()==1) day[0] = "0" + day[0];
        if(day[1].length()==1) day[1] = "0" + day[1];
        return day[0]+"/"+day[1]+"/"+day[2];
    }
    private float tongdiem(){
        return m1+m2+m3;
    }
    @Override
    public String toString() {
        return name + " " + date + " " + String.format("%.1f",tongdiem()) ;
    }
    
}
