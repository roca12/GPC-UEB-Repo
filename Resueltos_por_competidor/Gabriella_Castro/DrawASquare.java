/*
 * Autor: Gabriella Castro
 * Problema: Draw a Square
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2074/A
 */

import java.util.Scanner;

public class DrawASquare {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {

			int l = sc.nextInt();
			int u = sc.nextInt();
			int r = sc.nextInt();
			int d = sc.nextInt();

			if (l == u && u == r && r == d) {
				System.out.println("Yes");
			} else {
				System.out.println("No");
			}
		}

	}
}
