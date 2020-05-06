
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

    public class N {

    static int gcd(int a, int b) {
        if (b == 0) return a;
        else return gcd(b, a % b);
    }

    public static void main(String args[]) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int count = Integer.parseInt(input.readLine());
        while (count > 0) {
            String arr[] = input.readLine().split(" ");
            int array[] = new int[arr.length];
            for (int i = 0; i < arr.length; i++) array[i] = Integer.parseInt(arr[i]);
            int max = 0;
            for (int i = 0; i < array.length; i++) {
                for (int j = 0; j < array.length; j++) {
                    if(i!=j){
                    int val = gcd(array[i], array[j]);
                    if (val >= max) max = val; 
                    }
                }
            }
            System.out.println(max);
            count--;
        }
    }
}
