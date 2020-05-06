
import java.util.Arrays;
import java.util.Scanner;

public class M {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        Arrays.sort(array);
        for (int i = n - 1; i > 0; i--) {
            if (array[i - 1] == array[i] || array[n - 1] % array[i] != 0) {
                System.out.print(array[n-1] + " " + array[i] + "\n");
                break;
            }
        }
    }
}
