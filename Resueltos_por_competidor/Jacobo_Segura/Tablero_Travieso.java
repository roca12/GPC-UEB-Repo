import java.util.Scanner;
public class Main {
    static int[] leds = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        int n = s.length();
        int total = 0;

        for (char c : s.toCharArray()) {
            total += leds[c - '0'];
        }

        StringBuilder ans = new StringBuilder();

        for (int i = 0; i < n; i++) {
            int left = n - i - 1;

            for (int d = 9; d >= 0; d--) {
                int rem = total - leds[d];
                int minPossible = left * 2;
                int maxPossible = left * 7;

                if (rem >= minPossible && rem <= maxPossible) {
                    ans.append(d);
                    total = rem;
                    break;
                }
            }
        }

        System.out.println(ans);
    }
}
