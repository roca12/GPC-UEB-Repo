/*
 * Autor: Gabriella Castro
 * Problema: String Task
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/118/A
 */

import java.util.Scanner;

public class StringTask {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String input = sc.next();

		String s = input.toLowerCase();
		StringBuilder sb = new StringBuilder();

		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);

			if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
				sb.append('.');
				sb.append(c);
			}
		}

		System.out.println(sb.toString());
	}
}
