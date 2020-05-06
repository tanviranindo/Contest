
import java.util.Scanner;

public class H {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int max = 1001;
        int divisorsfound[] = new int[max + 1];
        int nthnumber[] = new int[max + 1];
        for (int i = 1; i <= max; i++) {
            for (int j = i; j <= max; j += i) {
                divisorsfound[j]++;
            }
            nthnumber[i] = i;
        }
        for (int i = 1; i < max - 1; i++) {
            for (int j = i + 1; j < max; j++) {
                int x = nthnumber[j];
                int y = nthnumber[i];
                if (divisorsfound[x] < divisorsfound[y] || (divisorsfound[x] == divisorsfound[y] && x > y)) {
                    int temp = nthnumber[i];
                    nthnumber[i] = nthnumber[j];
                    nthnumber[j] = temp;
                }
            }
        }

        int test = input.nextInt();
        for (int i = 1; i <= test; i++) {
            int value = input.nextInt();
            System.out.println("Case " + i + ": " + nthnumber[value]);
        }
        input.close();
    }
    
}
