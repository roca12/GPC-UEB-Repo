/*
 *  Autor: Jean Paul
 * Problema: A. Infinite Sequence
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/622/A
 */

import java.util.Scanner;

public class ISMain {
	static Scanner sc = new Scanner(System.in);

	static long[] LISTA;

	public static void main(String[] args) {

		long n = sc.nextLong();
		long a = 1;
		while (true) {
			if (n == 0) {
				System.out.println(a);
				break;
			}
			if (n - (a + 1) < 0) {
				System.out.println(n);
				break;
			}
			n -= a;
			a++;

		}
	}
}