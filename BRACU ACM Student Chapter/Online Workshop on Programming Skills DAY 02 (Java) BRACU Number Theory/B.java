
import java.io.IOException;
import java.util.Scanner;
import java.util.TreeSet;

public class B {

    public static void main(String args[]) throws IOException {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        for (int j = 1; j <= n; j++) {
            int number = input.nextInt();
            TreeSet<Integer> list = new TreeSet();
            for (int i = 1; i * i <= number; i++) {
                if (number % i == 0) {
                    list.add(i);
                    list.add(number / i);
                }
            }
            list.remove(list.last());
            int sum=0;
            for(Integer c: list) sum+=c;
            System.out.println(sum);
        }
    }
}
