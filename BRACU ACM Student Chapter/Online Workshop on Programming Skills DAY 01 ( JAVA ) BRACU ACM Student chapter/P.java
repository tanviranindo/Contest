import java.util.Scanner;
public class P{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    String letterA = input.next(), letterB = input.next();
    int result = letterA.compareToIgnoreCase(letterB);
    if(result<0)System.out.println(-1);
    else if(result>0)System.out.println(1);
    else System.out.println(0);
  }
}
