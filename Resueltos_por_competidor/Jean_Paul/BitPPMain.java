/*
 *  Autor: Jean Paul
 * Problema: A. Bit++
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/282/problem/A
 */

import java.util.Scanner;

public class BitPPMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int n = sc.nextInt();
		int x = 0;
		for (int i = 0; i < n; i++) {
			String s = sc.next();

			if (s.contains("++")) {
				x++;
			} else {
				x--;
			}

		}
		System.out.println(x);
	}
}
