/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J05011_tinhgio;

/**
 *
 * @author ASUS
 */
import J05011_tinhgio.Time;
public class Gamer implements Comparable<Gamer>{
    private String ma,name;
    private Time gbd,gkt;

    public Gamer(String ma, String name, Time gbd, Time gkt) {
        this.ma = ma;
        this.name = name;
        this.gbd = gbd;
        this.gkt = gkt;
    }
    public Time tinhgio(){
        Time x= Time.hieu(gkt, gbd);
        return x;
    }
    @Override
    public String toString() {
        return ma + " " + name + " " + tinhgio();
    } 
    @Override 
    public int compareTo(Gamer x){
        return tinhgio().compare(x.tinhgio());
    }
}
