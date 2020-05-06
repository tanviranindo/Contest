
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class K {

    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(input.readLine());

        System.out.println((n%4==0)||(n%7==0)||(n%47==0)||(n%74==0)||(n%477==0) ? "YES" : "NO");
    }
}
