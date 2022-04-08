/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04015_tinhthunhapgiavien;

/**
 *
 * @author ASUS
 */
public class Giaovien {
    private String ma,name;
    private long luongcb;

    public Giaovien(String ma, String name, long luongcb) {
        this.ma = ma;
        this.name = name;
        this.luongcb = luongcb;
    }
    
    public long bacluong(){
        StringBuilder kq = new StringBuilder("");
        kq.append(ma.charAt(2));
        kq.append(ma.charAt(3));
        return Long.parseLong(kq.toString());
    }
    
    public long phucap(){
        if(ma.contains("HT")) return 2000000;
        else{
            if(ma.contains("HP")) return 900000;
            else return 500000;
        }
    }
    
    public long thunhap(){
        return bacluong()*luongcb + phucap();
    }

    @Override
    public String toString() {
        return ma + " " + name + " " + bacluong() + " " +phucap() + " " + thunhap() ;
    }
    
    
}
