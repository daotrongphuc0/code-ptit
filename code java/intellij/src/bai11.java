import java.util.ArrayList;
import java.util.Locale;
import java.util.Scanner;

public class bai11 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        System.out.println(tinhpt(a,b,c));

    }
    public static String tinhpt(int a, int b,int c){
        String kq ="";
        double delta = b*b-4*a*c;
        if(delta < 0) {
            kq = "The equation has no real root.";
        }
        else {
            if(delta == 0 ){
                float x = (-b)/(2*a);
                kq = String.format("%.2f",x) + " " + String.format("%.2f",x);
            }
            else {
                double x1 = (-b-Math.sqrt(delta))/(2*a);
                double x2 = (-b+Math.sqrt(delta))/(2*a);
                kq =  String.format("%.2f",x1) + " " + String.format("%.2f",x2);
            }
        }
        return kq;
    }
}


