/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Test;

/**
 *
 * @author Admin
 */
public class Khaibao {
    private String name;
    private String lop;
    private String date;
    private float grade;
    public Khaibao(String name, String lop, String date, float grade){
        this.name = name;
        this.lop = lop;
        this.date = xuli(date);
        this.grade = grade;
    }
    private String xuli(String date){
        String birth[] = date.split("/");
        if(birth[0].length() == 1){
            birth[0] = "0" + birth[0];
        }
        if(birth[1].length() == 1){
            birth[1] = "0" + birth[1];
        }
        return birth[0] + "/" + birth[1] + "/"+ birth[2 ];
        
    }
    @Override
    public String toString(){
        return "B20DCCN001"+" " + name+ " " + lop +" "+ date + " "+String.format("%.1f", grade);
    }
    
}
