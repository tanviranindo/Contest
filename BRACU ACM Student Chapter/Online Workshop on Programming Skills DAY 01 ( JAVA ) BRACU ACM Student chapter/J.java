
import java.util.Scanner;

public class J{
  
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int count = input.nextInt();
    for(int i=1; i<=count; i++){
      int sum=1, factorial = input.nextInt();
      for(int j=1; j<=factorial; j++) sum*=j;
      System.out.println(sum);
    }
  }
}
  
