
import java.util.Scanner;

public class E {

    public static void main(String[] args) {
    Scanner input = new Scanner(System.in);

    long n= input.nextLong(), k= input.nextLong();
    if(k <= (n + 1) / 2) System.out.println(k * 2 - 1);
    else System.out.println((k - (n + 1) / 2) * 2);
        
    }
}
