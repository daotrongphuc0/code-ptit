import java.util.Scanner;

public class bai29 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        float [] m = new float[20];
        float sum  =0;
        for (int i = 0;i<n;i++){
            m[i] = in.nextFloat();
            sum += m[i];
        }
        System.out.println(String.format("%.2f",sum));
    }
}
