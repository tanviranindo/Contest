
import java.util.ArrayList;
import java.util.Scanner;

public class J {

    static int array[] = new int[9000001];
    static ArrayList<Integer> arr = new ArrayList();

    public static void sieve() {
        for (int i = 3; i <= 2000; i += 2) 
            for (int j = i * i; j <= 9000000; j += i) 
                array[j] = 1;
        arr.add(2);
        for (int i = 3; i <= 9000000; i += 2)
            if (array[i] == 0) 
                arr.add(i);
        }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        sieve();
        int t = input.nextInt();
        while (t-- > 0) {
            int count = 0;
            int x = input.nextInt();
            int k = input.nextInt();
            for (int i = 0; arr.get(i) <= Math.sqrt(x); i++) {
                while (x % arr.get(i) == 0) {
                    x /= arr.get(i);
                    count++;
                }
            }
            if (x != 1) count++;
            if (count >= k) System.out.println(1); 
            else System.out.println(0);
        }
    }
}
