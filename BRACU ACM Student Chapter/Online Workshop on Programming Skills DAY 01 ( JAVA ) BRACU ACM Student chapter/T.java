import java.util.Scanner;
public class T {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int count = input.nextInt();
    for(int i=1; i<=count; i++){
      int a = input.nextInt();
      int b = input.nextInt();
      int c = input.nextInt();
      System.out.println((a+b+c==180) ? "YES" : "NO");
    }
  }
}
