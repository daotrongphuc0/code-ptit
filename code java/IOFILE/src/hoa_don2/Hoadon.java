/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package hoa_don2;

/**
 *
 * @author daotr
 */
public class Hoadon {
    private String mahd,makh,mamh;
    private int sl;

    public Hoadon(int i, String s) {
        this.mahd = "HD"+ String.format("%03d", i);
        String[] ds = s.split("\\s+");
        this.makh = ds[0];
        this.mamh = ds[1];
        this.sl = Integer.parseInt(ds[2]);
    }

    public String getMahd() {
        return mahd;
    }

    public String getMakh() {
        return makh;
    }

    public String getMamh() {
        return mamh;
    }

    public int getSl() {
        return sl;
    }

    @Override
    public String toString() {
        return  mahd + " " + makh + " " + mamh + " " + sl  ;
    }

    
    
}
