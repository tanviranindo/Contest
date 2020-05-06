import java.util.Scanner;
public class Q{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    boolean condition = true;
    char word[] = input.next().toCharArray();
    for(int i=1; i<word.length; i++){
      if(word[i]>='a' && word[i]<='z'){
        condition = false;
        break;
      }
    }
    if(condition){
      for(int i=0; i< word.length; i++){
        if(word[i]>='A' && word[i]<='Z'){
          word[i]+=32;
        }
        else{
          word[i]-=32;
        }
      }
    }
    System.out.println(word);
  }
}