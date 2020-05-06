
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class TNEWE {

    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(input.readLine());
        System.out.println((n % 2 == 0) ? ((n - 8) + " " + 8) : (n - 9) + " " + 9);
    }
}
