import java.util.Scanner;
public class L {
  public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    
    int number, pref, post, mdx, test = in.nextInt();
    long sort;
    for(int i = 0;i<test;i++) {
      sort = in.nextLong();
      number =(int) Math.sqrt(sort);
      mdx =(int) sort - (number*number);
      
      if(number%2!=0) {
        post = number;
        pref = 1;
        if(mdx>0) {
          post++;
          mdx--;
        }
        if(mdx>number) {
          pref+=number;
          mdx-=number;
        } else {
          pref+=mdx;
          mdx = 0;
        }
        post-=mdx;
      } else {
        pref = number;
        post = 1;
        if(mdx>0) {
          pref++;
          mdx--;
        }
        if(mdx>number) {
          post+=number;
          mdx-=number;
        } else {
          post+=mdx;
          mdx = 0;
        }
        pref-=mdx;
      }
      System.out.printf("Case %d: %d %d\n",i+1,pref,post);
    }
  }
}