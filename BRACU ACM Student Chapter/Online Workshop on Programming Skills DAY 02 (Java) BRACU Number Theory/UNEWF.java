
import java.util.ArrayList;
import java.util.Scanner;

public class UNEWF {

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList();
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();
        boolean[] condition = new boolean[number + 1];
        for (int i = 0; i <= number; i++) condition[i] = true;
        condition[0] = condition[1] = false;
        for (int i = 2; i * i <= number; i++) {
            if (condition[i]) {
                for (int j = i + i; j <= number; j += i)  condition[j] = false;
            }
        }

        for (int i = 2; i < number; i++) if (condition[i]) list.add(i);
        int count1 = 0, count2 = 0;
        boolean condition2 = true;
        for (int i = 6; i <= number; i++) {
            for (int increament : list) {
                if (increament> i) break;
                if (i % increament== 0)  count1++;
                if (count1 > 2) {
                    condition2 = false;
                    break;
                }
            }

            if (condition2 && count1 == 2) count2++;
            count1 = 0;
            condition2 = true;

        }
        System.out.println(count2);
    }
}
