/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package dangki;

/**
 *
 * @author daotr
 */
public class Mon implements Comparable<Mon>{
    private String ma,ten;
    private int tin;
    private String lt,th;

    public Mon(String ma, String ten, int tin, String lt, String th) {
        this.ma = ma;
        this.ten = ten;
        this.tin = tin;
        this.lt = lt;
        this.th = th;
    }

    public String getTh() {
        return th;
    }
    
    @Override
    public int compareTo(Mon o){
        return ma.compareTo(o.ma);
    }
    @Override
    public String toString() {
        return ma + " " + ten + " " + tin + " " + lt + " " + th ;
    }
    
}
