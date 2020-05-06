
import java.util.Scanner;

public class VNEWG {

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        while (n > 0) {
            long k = input.nextLong();
            int x = input.nextInt();
            System.out.println(9 * (k - 1) + x);
            n--;
        }
    }
}
