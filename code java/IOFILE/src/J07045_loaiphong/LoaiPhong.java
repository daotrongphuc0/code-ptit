/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package J07045_loaiphong;

/**
 *
 * @author daotr
 */
public class LoaiPhong implements Comparable<LoaiPhong>{
    private String loai,ten;
    private int dongia;
    private float phipv;

    public LoaiPhong(String tmp) {
        String[] d = tmp.split("\\s+");
        this.loai = d[0];
        this.ten = d[1];
        this.dongia = Integer.parseInt(d[2]);
        this.phipv = Float.parseFloat(d[3]);
    }

    
    @Override
    public int compareTo(LoaiPhong o){
        return ten.compareTo(o.ten);
    }

    @Override
    public String toString() {
        return loai + " " + ten + " " + dongia + " " + String.format("%.2f", phipv) ;
    }
    
}
