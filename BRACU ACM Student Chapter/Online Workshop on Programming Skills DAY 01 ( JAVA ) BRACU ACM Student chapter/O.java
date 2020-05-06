import java.util.Scanner;
public class O{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    String limit = input.next();
    if(limit.contains("1111111") || limit.contains("0000000") )  System.out.println("YES");
    else System.out.println("NO");
  }
}