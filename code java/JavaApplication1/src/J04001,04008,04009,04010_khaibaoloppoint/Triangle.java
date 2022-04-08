/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04001_khaibaoloppoint;

/**
 *
 * @author ASUS
 */
public class Triangle {
    private Point a,b,c;
    
    //private double x1=a.distance(b),x2=b.distance(c),x3=c.distance(a);

    public Triangle(Point a, Point b, Point c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    public String perimeter(){
        double x1=a.distance(b),x2=b.distance(c),x3=c.distance(a);
        if(x1>=x2+x3 || x2>=x1+x3 || x3>= x1+x2) return "INVALID";
        else return String.format("%.3f", x1+x2+x3 );
    }
    public String area(){
        double x1=a.distance(b),x2=b.distance(c),x3=c.distance(a);
        if(x1>=x2+x3 || x2>=x1+x3 || x3>= x1+x2) return "INVALID";
        double p1=x1+x2+x3,p2=x1+x2-x3,p3=x2+x3-x1,p4=x3+x1-x2;
        double p5=0.25*Math.sqrt((x1+x2+x3)*(x1+x2-x3)*(x1-x2+x3)*(-x1+x2+x3));
        return String.format("%.2f", p5 );
    }
    
    public String areaOfCircumcircle(){
        double x1=a.distance(b),x2=b.distance(c),x3=c.distance(a);
        if(x1>=x2+x3 || x2>=x1+x3 || x3>= x1+x2) return "INVALID";
        double p1=x1+x2+x3,p2=x1+x2-x3,p3=x2+x3-x1,p4=x3+x1-x2;
        double p5=0.25*Math.sqrt((x1+x2+x3)*(x1+x2-x3)*(x1-x2+x3)*(-x1+x2+x3));
        double R = (x1*x2*x3)/(4*p5);
        return String.format("%.3f", Math.PI*Math.pow(R,2) );
    }
}
