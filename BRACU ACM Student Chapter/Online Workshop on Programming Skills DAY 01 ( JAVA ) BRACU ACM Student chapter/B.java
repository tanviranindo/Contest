
import java.util.Scanner;

public class B {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count = input.nextInt();
        int mid = 0;
        for (int i = 1; i <= count; i++) {
            int a = input.nextInt();
            int b = input.nextInt();
            int c = input.nextInt();

            if ((a > b && a < c) || (a < b && a > c)) {
                mid = a;
            }
            if ((b > a && b < c) || (b < a && b > c)) {
                mid = b;
            }
            if ((c > a && c < b) || (c < a && c > b)) {
                mid = c;
            }
            System.out.println(mid);
        }
    }
}
