
import java.util.ArrayList;
import java.util.Scanner;

public class E {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt(), m = input.nextInt();
        ArrayList<String> frequency = new ArrayList<>();
        String s;
        int count = 0;
        for (int i = 0; i < n; i++) {
            s = input.next();
            frequency.add(s);
        }
        for (int i = 0; i < m; i++) {
            s = input.next();
            if (frequency.contains(s)) {
                count++;
            }
        }
        input.close();
        System.out.println(n > m ? "YES" : n == m ? count % 2 == 0 ? "NO" : "YES" : "NO");
    }
}
