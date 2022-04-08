package student;

import java.text.DateFormat;
import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Scanner;

public class main {
    public static void main(String[] args) throws ParseException {
        Scanner in = new Scanner(System.in);
        Student a = new Student(in.nextLine(), in.nextLine(),in.nextLine(), in.nextLine(), in.nextLine(), Double.parseDouble(in.nextLine()));
        System.out.println(a);
    }
}
