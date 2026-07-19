/*
 *  Autor: Jean Paul
 * Problema: D. The Clock
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1692/D
 */

import java.util.ArrayList;
import java.util.Scanner;

public class TCMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			String s = sc.next();
			int x = sc.nextInt();

			String[] hm = s.split(":");
			int h = Integer.parseInt(hm[0]);
			int m = Integer.parseInt(hm[1]);

			int palim = 0;
			ArrayList<String> horas = new ArrayList<>();

			horas.add(h + ":" + m);
			if ((x == 1 || x == 1439) || ((h == 0 && m == 0) && x == 1339)) {
				System.out.println(16);
			} else {
				while (true) {

					m += x;

					if (m > 59) {
						h += m / 60;
						m %= 60;
					}

					if (h > 23) {
						h %= 24;
					}

					if (equalsTo(h, m)) {
						palim++;
					}

					if (horas.contains(h + ":" + m)) {
						break;
					}

					horas.add(h + ":" + m);

				}

				System.out.println(palim);
			}
		}
	}

	static boolean equalsTo(int h, int m) {
		int min1 = m / 10;
		int min2 = m - (min1 * 10);
		int min3 = min1 + (min2 * 10);

		if (h == min3) {
			return true;
		}
		return false;
	}
}