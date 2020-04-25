
import java.util.Scanner;

public class A {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        boolean condition = true;
        while (condition) {
            int A = input.nextInt();
            if(A!=42) System.out.println(A);
            else condition=false;
        }
    }
}
