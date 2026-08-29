import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt(), k = sc.nextInt(), v = sc.nextInt();
            int r = 0;

            for (int i = 0; i < n; i++) {
                r += sc.nextInt();
            }

            int total = v * (n + k);
            int g = total - r;

            if (g <= 0 || g % k != 0) {
                System.out.println(-1);
            } else {
                System.out.println(g / k);
            }
        }
    }
}
