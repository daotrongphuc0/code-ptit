/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package j04007_khaibaolopnhanvien;

/**
 *
 * @author ASUS
 */
import java.text.*;
import java.util.Date;
public class Nhanvien {
    private String mnv,name,gt,dc,mst;
    private Date ns,nlv;

    public Nhanvien(int n,String name, String gt, String ns, String dc, String mst, String nlv) throws ParseException {      
        this.mnv = String.format("%05d", n);
        this.name = name;
        this.gt = gt;
        this.ns = new SimpleDateFormat("dd/MM/yyyy").parse(ns);
        this.dc = dc;
        this.mst = mst;
        this.nlv = new SimpleDateFormat("dd/MM/yyyy").parse(nlv);
    }

    public Date getNs() {
        return ns;
    }
    
    public int comparaTo(Nhanvien b){
        return ns.compareTo(b.getNs());
    }
    @Override
    public String toString() {
        return mnv + " " + name + " " + gt + " " + new SimpleDateFormat("dd/MM/yyyy").format(ns) + " " + dc + " " + mst + " " +new SimpleDateFormat("dd/MM/yyyy").format(nlv) ;
    }
    
}
