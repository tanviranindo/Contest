
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class F {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int max = input.nextInt(), test = input.nextInt();
        Set<Integer> value1 = new HashSet<>(), value2 = new HashSet<>();
        int countone = max, counttwo = max;
        for (int i = 1; i <= test; i++) {
            int valueone = input.nextInt();
            int valuetwo = input.nextInt();
            if (!value1.contains(valueone)) {
                countone--;
                value1.add(valueone);
            }
            if (!value2.contains(valuetwo)) {
                counttwo--;
                value2.add(valuetwo);
            }
            System.out.print(1L * countone * counttwo + " ");
        }
        input.close();
    }
}
