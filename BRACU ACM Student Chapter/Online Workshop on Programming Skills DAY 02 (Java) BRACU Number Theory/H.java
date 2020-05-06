
import java.util.Scanner;

public class H {

    private static boolean isPrime(int num) {
        if (num==1) return false;
        if (num == 2)  return true;
        if (num % 2 == 0) return false; 
        for (int i = 3; i * i <= num; i += 2) if (num % i == 0) return false;
        return true;    
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        while (n > 0) {
            int a = input.nextInt();
            int b = input.nextInt();
            for (int i = a; i <= b; i++) {
                if (isPrime(i)) System.out.println(i);
            }
        n--;
        }
    }
}

