import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class QNEWB {

    public static void main(String[] args) throws IOException {
        {
            BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
            int num = Integer.parseInt(input.readLine());
            boolean condition = false;
            int sum = 0;
            for (int i = 1; sum <= num; i++) {
                sum = sum + i;
                if (sum == num) condition = true;
            }
            System.out.println(condition ? "YES" : "NO");
        }
    }
}
