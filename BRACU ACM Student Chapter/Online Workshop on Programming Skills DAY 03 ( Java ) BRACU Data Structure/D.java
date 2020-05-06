
import java.util.HashMap;
import java.util.Scanner;

public class D {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int test = input.nextInt();
        HashMap<String, Integer> value = new HashMap<>();
        while (test-- > 0) {
            String word = input.next();
            if (value.containsKey(word)) {
                int count = value.get(word);
                value.put(word, count + 1);
                System.out.println(word + count);
            } else {
                System.out.println("OK");
                value.put(word, 1);
            }
        }
        input.close();
    }
}
