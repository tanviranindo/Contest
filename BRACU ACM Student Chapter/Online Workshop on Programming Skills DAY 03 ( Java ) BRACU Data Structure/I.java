
import java.util.PriorityQueue;
import java.util.Scanner;

public class I {

    static PriorityQueue<Integer> store;

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        while (test != 0) {
            store = new PriorityQueue<>();
            for (int i = 0; i < test; i++) {
                store.add(input.nextInt());
            }

            int addagain = 0;
            while (store.size() > 1) {
                int a = store.poll();
                int b = store.poll();
                int sum = a + b;
                store.add(sum);
                addagain += sum;
            }
            System.out.println(addagain);
            test = input.nextInt();
        }
        input.close();
    }
}
