/*
 *  Autor: Jean Paul
 * Problema: A. Road To Zero
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1342/A
 */

import java.util.*;

public class RoadToZeroMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			long x = sc.nextInt();
			long y = sc.nextInt();

			long a = sc.nextInt();
			long b = sc.nextInt();

			if (x == 0 && y == 0) {
				System.out.println(0);
			} else {
				long contador = 0;

				if (x == 0 && y != 0) {
					contador += y * a;
					y = 0;
				}

				if (y == 0 && x != 0) {
					contador += x * a;
					x = 0;
				}

				if (x > y) {
					contador += (x - y) * a;
					x = y;
				}

				if (y > x) {
					contador += (y - x) * a;
					y = x;
				}

				if (x == y) {
					if (a > b / 2) {
						contador += x * b;
						x = 0;
						y = 0;
					} else {
						contador += 2 * x * a;
						x = 0;
						y = 0;
					}
				}
				System.out.println(contador);
			}
		}
	}
}
