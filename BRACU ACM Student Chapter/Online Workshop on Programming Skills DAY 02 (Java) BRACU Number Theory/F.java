
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class F {

    public static void main(String[] args) throws IOException {
        BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
        int prime[] = new int[1000001];
        prime[0] = prime[1] = 1;
        for (int i = 2; i < 1000; i++) {
            if (prime[i] == 0) {
                int starts = 2;
                while (starts * i < 1000001) {
                    prime[starts * i] = 1;
                    starts++;
                }
            }
        }
        while (true) {
            int num = Integer.parseInt(input.readLine());
            if (num == 0) {
                break;
            }

            for (int i = 3; i <= num / 2; i++) {
                if (prime[i] == 0 && prime[num - i] == 0) {
                    System.out.print(num + " = " + i + " + " + (num - i) + "\n");
                    break;
                }
            }
        }
    }
}
