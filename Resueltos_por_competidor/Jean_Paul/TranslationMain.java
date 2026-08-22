/*
 *  Autor: Jean Paul
 * Problema: A. Translation
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/41/problem/A
 */

import java.util.Scanner;

public class TranslationMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		String s = sc.next();
		String t = sc.next();

		boolean revers = true;

		if (s.length() != t.length()) {
			System.out.println("NO");
		} else {
			for (int i = 0; i < s.length(); i++) {
				if (s.charAt(i) != t.charAt(s.length() - 1 - i)) {
					revers = !revers;
					break;
				}
			}
			System.out.println(revers ? "YES" : "NO");
		}
	}
}
