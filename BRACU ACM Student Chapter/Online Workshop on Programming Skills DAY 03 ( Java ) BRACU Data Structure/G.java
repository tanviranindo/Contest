
import java.util.ArrayList;
import java.util.Scanner;

public class G {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number = input.nextInt();

        while (number != 0) {

            if (number == 1) {
                System.out.println("Discarded cards:\nRemaining card: 1");
            } else {
                ArrayList<Integer> card = new ArrayList<>();

                for (int i = 0; i < number; i++) {
                    card.add(i + 1);
                }

                System.out.print("Discarded cards: ");

                while (card.size() - 1 >= 2) {
                    System.out.print(card.get(0) + ", ");
                    card.remove(0);
                    card.add(card.get(0));
                    card.remove(0);
                }
                System.out.print(card.get(0));
                card.remove(0);

                System.out.println("\nRemaining card: " + card.get(0));
            }
            number = input.nextInt();
        }
        input.close();
    }
}
