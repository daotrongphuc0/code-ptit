/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05018_khaiboalophocsinh;

/**
 *
 * @author ASUS
 */
public class Hocsinh implements Comparable<Hocsinh>{
    private String ma,name;
    private double diem;

    public Hocsinh(int n,String name, String daydiem) {
        this.ma = "HS" + String.format("%02d", n);
        this.name = name;
        this.diem = xuli(daydiem);
    }
    public double xuli(String daydiem){
        String ds[] = daydiem.split("\\s+");
        double tong= 0;
        tong =tong + Double.parseDouble(ds[0])*2;
        tong =tong + Double.parseDouble(ds[1])*2;
        for (int i = 2; i < 10; i++) {
            tong += Double.parseDouble(ds[i]);
        }
        tong =tong /12;
        tong = ((double) Math.round(tong * 10) / 10);
        return tong ;       
    }

    
    public String xeploai(){
        if (diem < 5)
            return "YEU";
        else if (diem < 7)
            return "TB";
        else if (diem < 8)
            return "KHA";
        else if (diem < 9)
            return "GIOI";
        else
            return "XUAT SAC";
    }
    @Override
    public String toString() {
        return ma + " " + name + " " + String.format("%.1f",diem) + " " + xeploai();
    }
    
    @Override 
    public int compareTo(Hocsinh o2){
        if (this.diem == o2.diem)
            return this.ma.compareTo(o2.ma);
        return o2.diem > this.diem ? 1 : -1;
    }
    
}
