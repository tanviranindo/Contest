
import java.util.Scanner;

public class L {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        while (k > 0) {
            long x = input.nextLong(), y = input.nextLong();
            System.out.println((x - y != 1) ? "YES" : "NO");
            k--;
        }
    }
}
