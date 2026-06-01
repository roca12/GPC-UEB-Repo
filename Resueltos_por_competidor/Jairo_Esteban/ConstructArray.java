import java.util.Scanner;

/*
 * Autor: [kjairoo]
 * Problema: [Construct an Array]
 * Juez online: [Codeforce]
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2231/A
*/

public class ConstructArray {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int t = sc.nextInt();

		while (t-- > 0) {
			int n = sc.nextInt();

			for (int i = 1; i <= n; i++) {
				System.out.print(2 * i - 1);

				if (i < n) {
					System.out.println(" ");
				}
			}
			System.out.println();
		}

	}

}
