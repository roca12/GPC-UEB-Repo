/*
 * Autor: OtherSpanish
 * Problema: Incompatible Pairs
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106039/problem/G
 */

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		sc.nextLine();
		String s = sc.nextLine();

		long bal = 0, prevPar = 0, start = 0, res = 0;
		for (int i = 0; i < n; i++) {
			bal += (s.charAt(i) == '(') ? 1 : -1;
			if (bal == 0) {
				long cantParej = (i - start + 1) / 2;
				res += cantParej * prevPar;
				prevPar += cantParej;
				start = i + 1;
			}

		}

		System.out.println(res);

	}

}
