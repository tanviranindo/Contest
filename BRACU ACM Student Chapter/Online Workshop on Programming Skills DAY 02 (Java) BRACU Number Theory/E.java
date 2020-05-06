
import java.util.Scanner;

public class E {

    static int gcd(int a, int b) {
        if (b == 0) return a;
        else return gcd(b, a % b);
    }

    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        while (N != 0) {
            int G = 0;
            for (int i = 1; i < N; i++)
                for (int j = i + 1; j <= N; j++)  
                    G += gcd(i, j);            
            System.out.println(G);
            N = input.nextInt();
        }
    }
}
