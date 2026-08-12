/*
 * Autor: Gabriella Castro
 * Problema: IQ Test
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/25/A
 */

import java.util.Scanner;

public class IQTest {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int par = 0, impar = 0;
		int idxPar = 0, idxImpar = 0;

		for (int i = 1; i <= n; i++) {
			int x = sc.nextInt();
			if (x % 2 == 0) {
				par++;
				idxPar = i;
			} else {
				impar++;
				idxImpar = i;
			}
		}

		if (par == 1) {
			System.out.println(idxPar);
		} else {
			System.out.println(idxImpar);
		}

	}
}
