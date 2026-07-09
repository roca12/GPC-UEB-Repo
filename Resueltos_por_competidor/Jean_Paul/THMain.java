/*
 *  Autor: Jean Paul
 * Problema: A. Treasure Hunt
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2090/A
 */

import java.util.Scanner;

public class THMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			int a = sc.nextInt();

			if (a >= (x + y)) {
				if (a % (x + y) == 0)
					System.out.println("NO");
				if (a % (x + y) != 0 && (a % (x + y)) - x >= 0) 
					System.out.println("YES");
				if (a % (x + y) != 0 && (a % (x + y)) - x < 0) 
					System.out.println("NO");
			}

			if (a < (x + y)) {
				System.out.println(a < x ? "NO" : "YES");
			}
		}
	}
}
