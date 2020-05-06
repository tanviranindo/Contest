
import java.util.Scanner;

public class F {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int counter = input.nextInt();
        while (counter > 0) {
            char infut[] = input.next().toCharArray();
            int sum = 0;
            for (int i = 0; i < infut.length; i++) {
                if (infut[i] == '4') {
                    sum++;
                }
            }
            System.out.println(sum);
            counter--;
        }
    }
}
