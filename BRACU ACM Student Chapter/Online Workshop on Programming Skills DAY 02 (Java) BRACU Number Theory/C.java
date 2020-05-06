
import java.util.Scanner;

public class C {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (input.hasNextInt()) {
            int number = input.nextInt();
            int factors = 0;
            for (int i = 2; i <= number; i++) {
                int carry = i;
                while (carry % 2 == 0) {
                    carry /= 2;
                    factors++;
                }
                for (int j = 3; j <= Math.sqrt(carry); j += 2) {
                    while (carry % j == 0) {
                        carry /= j;
                        factors++;
                    }
                }
                if (carry > 2) {
                    factors++;
                }
            }
            System.out.println(factors);
        }
    }
}
