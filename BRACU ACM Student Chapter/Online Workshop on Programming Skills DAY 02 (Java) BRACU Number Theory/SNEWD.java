
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class SNEWD {

    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        boolean prime = true;
        int n = Integer.parseInt(input.readLine());
        for(int i=2; i<=n/2; i++)
        {
            if((n%i==0))
            {
                prime = false;
                break;
            }
        }
        System.out.println(prime ? "Yes" : "No");
    }
}
