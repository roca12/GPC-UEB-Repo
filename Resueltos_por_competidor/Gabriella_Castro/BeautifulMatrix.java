/*
 * Autor: Gabriella Castro
 * Problema: Beautiful Matrix
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/263/A
 */

import java.util.Scanner;

public class BeautifulMatrix {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				int x = sc.nextInt();

				if (x == 1) {
					int movimientos = Math.abs(i - 2) + Math.abs(j - 2);
					System.out.println(movimientos);

					return;
				}
			}
		}

	}
}
