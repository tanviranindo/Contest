import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class RNEWC {
 
    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        String arr[] = input.readLine().split(" ") ;
        int n = Integer.parseInt(arr[0]);
        int k = Integer.parseInt(arr[1]);
        n = n+1;
        int remainder = (n+k)%k;
        System.out.println(remainder==0 ? n : (n+k-remainder));
    }
}