import java.util.Scanner;
public class R {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String word = input.next();
    System.out.println(delete(word));
  }
  
  static String delete(String word) {
    StringBuilder input = new StringBuilder(word);
    boolean condition = true;
    
    while (condition) {
      condition = false;
      for (int i = 0; i < input.length() - 1; ++i) {        
        if (input.charAt(i) == input.charAt(i + 1)) {
          input.delete(i, i + 2);
          condition = true;
          
        }
      }
    }
    
    if (input.length() == 0) return "Empty String";
    else return input.toString();
  }  
}