
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintStream;

class D {

    public static int parseInt(String string) {
        int number = 0;
        for (int i = 0, length = string.length(); i < length; i++) {
            number *= 10;
            number += string.charAt(i) - '0';
        }
        return number;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintStream out = new PrintStream(new BufferedOutputStream(System.out));

        int count = parseInt(in.readLine());
        int[] numbers = new int[1000001];
        for (int i = 0; i < count; i++) ++numbers[parseInt(in.readLine())];       

        for (int i = 0; i < 1000001; i++) for (int j = 0; j < numbers[i]; ++j) out.println(i);
        out.flush();
    }
}
