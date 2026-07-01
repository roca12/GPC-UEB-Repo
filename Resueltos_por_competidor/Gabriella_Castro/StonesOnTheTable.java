/*
 * Autor: Gabriella Castro
 * Problema: Stones On The Table
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/266/A
 */

import java.util.Scanner;

public class StonesOnTheTable {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		String s = sc.next();

		int roca = 0;

		for (int i = 1; i < n; i++) {
			if (s.charAt(i) == s.charAt(i - 1)) {
				roca++;
			}
		}

		System.out.println(roca);
	}
}
