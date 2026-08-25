/* 
Codeforces 141A - Amusing Joke
https://codeforces.com/problemset/problem/141/A
*/
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String a = sc.nextLine();
        String b = sc.nextLine();
        String c = sc.nextLine();

        char[] letras1 = (a + b).toCharArray();
        char[] letras2 = c.toCharArray();

        Arrays.sort(letras1);
        Arrays.sort(letras2);

        if (Arrays.equals(letras1, letras2)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
