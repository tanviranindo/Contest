
import java.util.Scanner;

public class G {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int counter = input.nextInt();
        int count = counter, counter2;
        for (int i = 0; i < count; i++) {
            counter2 = input.nextInt();
            int number[] = new int [counter2];
            for (int j = 0; j < number.length; j++) number[j] = input.nextInt();
            System.out.println((((long)counter2) * (counter2 - 1) / 2));
        }
    }
}
