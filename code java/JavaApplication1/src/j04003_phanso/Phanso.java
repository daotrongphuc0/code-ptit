/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package j04003_phanso;

/**
 *
 * @author ASUS
 */
public class Phanso {
    private long tu , mau;

    public Phanso(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
    }
    
    private long ucln(long a,long b){
        while(b>0){
            long t =a%b;
            a =b;
            b =t;
        }
        return a;
    }
    private long bcnn(long a,long b){
        return a*b/ucln(a,b);
    }
    public long getMau() {
        return mau;
    }
    
    public long getTu() {
        return tu;
    }
    
    public void rutgon(){
        long x =ucln(tu,mau);
        tu/=x;mau/=x;
    }
    public void tong(Phanso a){
        rutgon();
        a.rutgon();
        long cs1 = bcnn(mau,a.getMau())/mau;
        long cs2 = bcnn(mau,a.getMau())/a.getMau();
        tu = tu*cs1+a.getTu()*cs2;
        mau= bcnn(mau,a.getMau());
    }
    @Override
    public String toString() {
        return tu +"/" + mau;
    }
    
}
