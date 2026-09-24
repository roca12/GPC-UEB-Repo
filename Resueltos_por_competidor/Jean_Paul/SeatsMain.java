/*
 * Autor: Jean Paul
 * Problema: B. Seats
 * Juez online: Polygon
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2188/B
 */

import java.util.Scanner;

public class SeatsMain {
	// Que hp ejercicio tan mamon, 1 de 16, si no fuese por jacoCoito y marcano no
	// hubiese llegado a esta solucion de gran hp mrd, en fin, odio esto ejercicio
	// tan mundano
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			String s = sc.next();
			seats(s);
		}
	}

	static void seats(String s) {
		if (!s.contains("1")) {
			System.out.println((s.length() + 2) / 3);
			return;
		}

		if (s.endsWith("1")) {
			s += "0";
		}

		String[] CEROS = s.split("1");
		long amount = 0;
		for (int i = 0; i < CEROS.length; i++) {
			amount += ((i == 0 || i == CEROS.length - 1) ? (CEROS[i].length() + 1) / 3 : CEROS[i].length() / 3);
		}

		for (int i = 0; i < s.length(); i++) {
			amount += (s.charAt(i) == '1' ? 1 : 0);
		}

		System.out.println(amount);
	}
}
