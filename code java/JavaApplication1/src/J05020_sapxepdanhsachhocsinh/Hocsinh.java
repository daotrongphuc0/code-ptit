/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05020_sapxepdanhsachhocsinh;

/**
 *
 * @author ASUS
 */
public class Hocsinh implements Comparable<Hocsinh> {
    private String ma,ten, lop,email;

    public Hocsinh(String ma, String ten, String lop, String email) {
        this.ma = ma;
        this.ten = ten;
        this.lop = lop;
        this.email = email;
    }
    
    @Override
    public String toString() {
        return  ma + " " + ten + " " + lop + " " + email ;
    }
    @Override 
    public int compareTo(Hocsinh a){
        String s1 = ma.substring(0, 3);
        String s2 = a.ma.substring(0, 3);
        if(s1.compareTo(s2) == 0){
            return ma.compareTo(a.ma);
        }
        else{
            if(s1.compareTo(s2) ==1) return -1;
            else return 1;
        }
    }
}
