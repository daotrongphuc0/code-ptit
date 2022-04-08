/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package thoigianonline;

/**
 *
 * @author daotr
 */
public class Time {
    private int ngay,thang,nam,gio,phut,giay;

    public Time(String s) {
        String[] d = s.split("\\s+");
        String[] date = d[0].split("/");
        String[] time = d[1].split(":");
        this.ngay = Integer.parseInt(date[0]);
        this.thang = Integer.parseInt(date[1]);
        this.nam = Integer.parseInt(date[2]);
        this.gio = Integer.parseInt(time[0]);
        this.phut = Integer.parseInt(time[1]);
        this.giay = Integer.parseInt(time[2]);
    }

    public int getNgay() {
        return ngay;
    }

    public int getThang() {
        return thang;
    }

    public int getNam() {
        return nam;
    }

    public int getGio() {
        return gio;
    }

    public int getPhut() {
        return phut;
    }

    public int getGiay() {
        return giay;
    }
    
    public  int tinhphut(Time b){
        int sophut = 0;
        sophut +=(ngay - b.getNgay())*1440;
        sophut +=(thang - b.getThang())*1440*30;
        sophut +=(nam-b.getNam())*1440*30*365;
        sophut +=(gio-b.getGio())*60;
        sophut +=phut-b.getPhut();
        return sophut;
    }
    
}
