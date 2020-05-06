import java.util.Scanner;
public class N{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int test = input.nextInt();
    for(int i=1; i<=test; i++){
      char word[] = input.next().toCharArray();
      int a = word.length;
      char first = word[0], last = word[a-1];
      if(a>10) System.out.println(first+""+(a-2)+""+last);
      else System.out.println(word);
    }
  }
}
