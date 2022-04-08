package Book;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Book a = new Book(new Author(in.nextLine()), in.nextLine(), Integer.parseInt(in.nextLine()),Boolean.parseBoolean(in.nextLine()));
        System.out.println(a);
    }
}
