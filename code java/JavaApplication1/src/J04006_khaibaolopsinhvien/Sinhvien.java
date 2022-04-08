/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04006_khaibaolopsinhvien;

/**
 *
 * @author ASUS
 */
import java.util.*;
public class Sinhvien {
    private String msv,name,lop,ns;
    private float gpa;

    public Sinhvien(int n,String name, String lop, String ns, float gpa) {
        this.msv = "B20DCCN"+ String.format("%03d", n);
        this.name = chuanhoa(name);
        this.lop = lop;
        this.ns = xuli(ns);
        this.gpa = gpa;
    }
    private String xuli(String ns){
        String day[] = ns.split("/");
        if(day[0].length()==1) day[0] = "0" + day[0];
        if(day[1].length()==1) day[1] = "0" + day[1];
        return day[0]+"/"+day[1]+"/"+day[2];
    }
    public String chuanhoa(String s){
        StringBuilder kq = new StringBuilder();
        StringTokenizer st = new StringTokenizer(s);
        while(st.hasMoreTokens()){
            String tmp = st.nextToken();
            kq.append(Character.toUpperCase(tmp.charAt(0)));
            for (int i = 1; i < tmp.length(); i++) {
                kq.append(Character.toLowerCase(tmp.charAt(i)));
            }
            kq.append(" ");
        }
        return kq.toString().trim();
    }

    public float getGpa() {
        return gpa;
    }
    public int sosanh(Sinhvien b){
        if(b.getGpa()>gpa) return -1;
        else{
            if(b.getGpa()== gpa) return 0;
            else return 1;
        }
    }
 
    public int compareTo( Sinhvien o2) {
       if(gpa > o2.getGpa())return -1;
       else {
           if(gpa == o2.getGpa()) return 0;
           else return 1;
       }
    }
    @Override   
    
    public String toString() {
        return msv + " " + name + " " + lop + " " + ns + " " +String.format("%.2f",gpa);
    }
    
}
