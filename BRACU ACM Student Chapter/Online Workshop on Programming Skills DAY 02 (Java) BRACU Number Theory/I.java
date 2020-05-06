
import java.util.Scanner;
import java.io.PrintWriter;

public class I {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        PrintWriter out = new PrintWriter(System.out);

        int testcase = sc.nextInt();

        for (int t = 0; t < testcase; t++) {
            int pages = sc.nextInt();

            switch (pages) {
                case 1:
                    out.println(1);
                    out.println("1 1");
                    break;
                case 2:
                    out.println(2);
                    out.println("2 1 2");
                    break;
                default:
                    if (pages % 2 == 0) {
                        int one = pages / 2;
                        out.println(one);

                        int three = 1;

                        for (int i = 1; i <= one; i++) {
                            out.println("2 " + (three) + " " + (three + 1));
                            three = three + 2;
                        }
                    } else {
                        int two = pages / 2;

                        out.println(two);

                        out.println("3 1 2 " + pages);

                        int three = 3;

                        for (int i = 2; i <= two; i++) {
                            out.println("2 " + (three) + " " + (three + 1));
                            three = three + 2;
                        }
                    }
                    break;
            }
        }

        out.flush();

    }
}
