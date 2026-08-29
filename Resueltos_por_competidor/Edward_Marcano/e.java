import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt(), k = sc.nextInt();
            int[] a = new int[n];
            int[] votes = new int[n + 1];

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                votes[a[i]]++;
            }

            int answer = 0;
            for (int i = 1; i <= n; i++) {
                if (votes[i] >= k) {
                    if (a[i - 1] != i) {
                        answer++;
                    }
                }
            }

            System.out.println(answer);
        }
    }
}
