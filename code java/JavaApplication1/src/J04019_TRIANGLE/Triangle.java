/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package J04019_TRIANGLE;

/**
 *
 * @author ASUS
 */
public class Triangle {
    private Point a,b,c;

    public Triangle(Point a, Point b, Point c) {
        this.a = a;
        this.b = b;
        this.c = c;
    }
    
    public boolean valid(){
        double x1= Point.kc(a, b),x2= Point.kc(a, c),x3= Point.kc(c, b);
        if(x1>=x2+x3 || x2>=x1+x3 || x3>=x1+x2) return false ;
        return true;
    }
    
    public String getPerimeter(){
        double x1= Point.kc(a, b),x2= Point.kc(a, c),x3= Point.kc(c, b);
        return String.format("%.3f",x1+x2+x3);
    }
}
