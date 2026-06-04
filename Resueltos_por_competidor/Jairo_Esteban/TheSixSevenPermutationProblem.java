
import java.util.Scanner;

/*
 * Autor: [kjairoo]
 * Problema: [The 67th Permutation Problem]
 * Juez online: [Codeforce]
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2218/C
*/

public class TheSixSevenPermutationProblem {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int t = sc.nextInt();
		StringBuilder sb = new StringBuilder();

		while (t-- > 0) {

			int n = sc.nextInt();

			for (int i = 1, j = 3 * n - 1, k = 3 * n; i <= n; i++, j -= 2, k -= 2) {

				sb.append(i).append(" ").append(j).append(" ").append(k);

				if (i != n)
					sb.append(" ");
			}

			sb.append('\n');
		}

		System.out.print(sb);
	}
}
