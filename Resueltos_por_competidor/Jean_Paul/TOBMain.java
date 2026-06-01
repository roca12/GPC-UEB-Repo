/*
 *  Autor: Jean Paul
 * Problema: A. Towers of Boxes
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2203/A
 */

import java.util.Scanner;

public class TOBMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t;
		t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			int d = sc.nextInt();

			if (m > d) {
				System.out.println(n);
			} else {
				int bloques = 0;
				while (n > 0) {
					int sum = 0;
					while (sum <= d) {
						n--;
						sum += m;
					}
					bloques++;
				}
				System.out.println(bloques);
			}
		}
	}
}