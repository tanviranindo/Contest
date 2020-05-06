
import java.util.Arrays;
import java.util.Scanner;

public class A {

    public static void grades(int number) {
        System.out.println(number >= 90 ? "A" : number >= 80 ? "B" : number >= 70 ? "C" : number >= 60 ? "D" : "F");
    }

    public static int besttwo(int classtest1, int classtest2, int classtest3) {
        int[] array = {classtest1, classtest2, classtest3};
        Arrays.sort(array);
        return (array[1] + array[2]) / 2;
    }

    public static int calculation(int term1, int term2, int finale, int attendance, int classtest1, int classtest2, int classtest3) {
        return term1 + term2 + finale + attendance + besttwo(classtest1, classtest2, classtest3);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        for (int i = 1; i <= test; i++) {
            System.out.print("Case " + i + ": ");
            int total = calculation(input.nextInt(), input.nextInt(), input.nextInt(), input.nextInt(), input.nextInt(), input.nextInt(), input.nextInt());
            grades(total);
        }
        input.close();
    }

}
