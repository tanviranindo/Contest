
import java.util.ArrayList;
import java.util.Scanner;

public class G {

    static ArrayList<Integer> arr = new ArrayList();
    static ArrayList<Integer> indexi = new ArrayList();
    static ArrayList<Integer> indexj = new ArrayList();

    public static void sieve() {
        int mx = 1000;
        int[] prime = new int[mx + 1];
        for (int i = 0; i <= mx; i++) {
            prime[i] = 1;
        }

        for (int i = 2; i <= Math.sqrt(mx); i++) {
            if (prime[i] == 1) {
                for (int j = 2; i * j <= mx; j++) {
                    prime[i * j] = 0;
                }
            }
        }

        for (int i = 2; i <= mx; i++) {
            if (prime[i] == 1) {
                arr.add(i);
            }
        }
        for (int i = 1; i <= mx; i++) {
            for (int j = 1; j <= i; j++) {
                indexi.add(i);
                indexj.add(j);
            }
        }
    }

    public static void main(String args[]) {
        long start = System.nanoTime();
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        sieve();
        while (test-- > 0) {
            int value = input.nextInt();
            if (arr.contains(value)) {
                int var = arr.indexOf(value);
                System.out.println(indexi.get(var) + " " + indexj.get(var));
            } else {
                System.out.println(-1);
            }
        }
        long end = System.nanoTime();
        long elapsedTime = end - start;
        System.out.println(elapsedTime / 1_000_000_000.0 + " seconds");
    }
}
