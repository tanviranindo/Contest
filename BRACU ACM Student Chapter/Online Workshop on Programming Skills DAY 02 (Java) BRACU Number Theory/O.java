
import java.util.Scanner;

public class O {

    public static long gcd(long x, long y) {
        if (x < y) {
            return gcd(y, x);
        } else {
            return y == 0 ? x : gcd(y, x % y);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        for (int i = 1; i <= test; i++) {
            int setvalue = 8;
            int numbers[] = new int[setvalue];
            int test2 = input.nextInt();
            for (int j = 0; j < test2; j++) {
                numbers[j] = input.nextInt();
            }
            long a = test2, b = 0;
            for (int k = 0; k < test2; k++) {
                a *= numbers[k];
                long d = 1;
                for (int l = 0; l < test2 - 1; l++) {
                    d *= numbers[(k + l) % test2];
                }
                b += d;
            }
            long g = gcd(a, b);
            System.out.println("Case " + i + ": " + a / g + "/" + b / g);
        }
    }
}
