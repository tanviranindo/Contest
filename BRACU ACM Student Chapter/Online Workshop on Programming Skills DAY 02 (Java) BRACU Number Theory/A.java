import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.TreeSet;
 
public class A {
 
    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        String [] s2 = input.readLine().split(" ") ;
        long n = Long.parseLong(s2[0]);
        int k = Integer.parseInt(s2[1]);
 
        TreeSet<Long> list = new TreeSet();
        for (long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                list.add(i);
                list.add(n / i);
            }
        }
        System.out.println(k<=list.size() ? list.toArray()[k-1] : -1);
    }
}