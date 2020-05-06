
import java.util.Scanner;
import java.util.Stack;

public class C {

    public static boolean forStack(String line) {

        Stack<Character> bracket = new Stack<>();

        for (Character input : line.toCharArray()) {
            if (forOpen(input)) bracket.push(input);
            else if (bracket.isEmpty()) return false; 
            else {
                Character open = bracket.pop();
                if (!forPair(open, input)) return false;
            }
        }

        if (bracket.size() > 0) return false;
        return true;
    }

    private static boolean forOpen(Character first) {
        return first != null && (first.equals('(') || first.equals('[') || first.equals('{'));
    }

    private static boolean forPair(Character open, Character close) {
        if (open == null || close == null) return false;
        else if (open.equals('(') && close.equals(')')) return true;
        else if (open.equals('[') && close.equals(']')) return true;
        else if (open.equals('{') && close.equals('}')) return true;
        else return false;
    }

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        while(t --> 0)  System.out.println(forStack(input.next()) ? "YES" : "NO");
        input.close();
    }
}
