import java.util.Scanner;
import java.lang.Math;
public class K{
  public static void main (String[] args){
    Scanner input = new Scanner(System.in);
    int testcase = input.nextInt();
    for(int i=1; i<=testcase; i++)
    {        
      double r;
      r = input.nextDouble();
      System.out.printf("Case %d: %.2f\n", i, (2*r*2*r)-(2*Math.acos(0.0)*Math.pow(r,2)));
    }
  }
}
