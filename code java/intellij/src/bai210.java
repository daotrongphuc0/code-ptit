import java.util.Scanner;

public class bai210 {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int thang  = in.nextInt();
        int ngay  = in.nextInt();
        System.out.println(tinhthu(ngay,thang));
    }
    public static String tinhthu(int n,int t){
        String kq ="";
        int ngay =0;
        int[] mt = {31,29,31,30,31,30,31,31,30,31,30,31};
        for (int i =0;i<t-1;i++){
            ngay += mt[i];
        }
        ngay +=n;
        ngay +=4;
        ngay %=7;
        switch (ngay){
            case 1:
                kq ="Monday";
                break;
            case 2:
                kq ="Tuesday";
                break;
            case 3:
                kq ="Wednesday";
                break;
            case 4:
                kq ="Thursday";
                break;
            case 5:
                kq ="Friday";
                break;
            case 6:
                kq ="Saturday";
                break;
            case 7:
                kq ="Sunday";
                break;
        }
        return kq;
    }
}
