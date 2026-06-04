import java.util.Scanner;

/*
 * Autor: [kjairoo]
 * Problema: [Party Monster]
 * Juez online: [Codeforce]
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2227/B
*/

public class PartyMonster {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int t = sc.nextInt();

		while (t-- > 0) {
			int n = sc.nextInt();
			String s = sc.next();

			int abierto = 0;

			for (int i = 0; i < n; i++) {
				if (s.charAt(i) == '(') {
					abierto++;
				}
			}

			int cerrado = n - abierto;

			System.out.println(abierto == cerrado ? "YES" : "NO");
		}

	}

}
