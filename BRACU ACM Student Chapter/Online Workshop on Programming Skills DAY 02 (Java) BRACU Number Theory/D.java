
import java.util.Scanner;

public class D {

    static String calculation(int num) {
        String result = "";
        int i;

        while (num != 1) {
            for (i = 9; i > 1; i--) {
                if (num % i == 0) {
                    num /= i;
                    result = i+result;
                    break;
                }
            }

            if (i == 1) {
                return "-1";
            }
        }

        return result;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        while (input.hasNextInt()) {
            int mod = input.nextInt();
            for (int i = 0; i < mod; i++) {
                int modifier = input.nextInt();
                if (modifier < 10) {
                    System.out.println(modifier);
                    continue;
                }
                System.out.println(calculation(modifier));
            }
        }
    }
}
