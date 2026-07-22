/*
 *  Autor: Jean Paul
 * Problema: A. Red Versus Blue
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1659/A
 */


import java.util.Scanner;

public class RVBMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			int r = sc.nextInt();
			int b = sc.nextInt();

			String RB = "";

			int swap = theSwap(r, b);

			for (int j = 0; j < n; j++) {
				if (swap > 0) {
					RB += "R";
					r--;
					swap--;
				} else {
					RB += "B";
					b--;
					swap = theSwap(r, b);
				}
			}

			System.out.println(RB);
		}
	}

	static int theSwap(int r, int b) {
		if (b == 0) {
			return r;
		}

		if (b == 1) {
			return r % 2 == 0 ? r / 2 : (r / 2) + 1;
		}

		if (b == 2) {
			return r % 3 == 0 ? r / 3 : (r + 2) / 3;
		}

		if (b == 3) {
			return r % 4 == 0 ? r / 4 : (r + 3) / 4;
		}

		if (b == 4) {
			return r % 5 == 0 ? r / 5 : (r + 4) / 5;
		}

		if (b == 5) {
			return r % 6 == 0 ? r / 6 : (r + 5) / 6;
		}

		if (b == 6) {
			return r % 7 == 0 ? r / 7 : (r + 6) / 7;
		}

		if (b == 7) {
			return r % 8 == 0 ? r / 8 : (r + 7) / 8;
		}
		
		if (b == 8) {
			return r % 9 == 0 ? r / 9 : (r + 8) / 9;
		}
		
		if (b == 9) {
			return r % 10 == 0 ? r / 10 : (r + 9) / 10;
		}
		
		if (r - b == 1) {
			return r - b;
		}

		return r - b < r / b ? r - b : r / b;
	}
}
