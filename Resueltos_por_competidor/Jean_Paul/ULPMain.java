/*
 *  Autor: Jean Paul
 * Problema: D. Unnatural Language Processing
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1915/D
 */

import java.util.Scanner;

public class ULPMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			String text = sc.next();

			text = text.replace("bb", "b.b");
			text = text.replace("bc", "b.c");
			text = text.replace("bd", "b.d");
			text = text.replace("cb", "c.b");
			text = text.replace("cc", "c.c");
			text = text.replace("cd", "c.d");
			text = text.replace("db", "d.b");
			text = text.replace("dc", "d.c");
			text = text.replace("dd", "d.d");

			text = text.replace("ba", "ba.");
			text = text.replace("ca", "ca.");
			text = text.replace("da", "da.");
			text = text.replace("be", "be.");
			text = text.replace("ce", "ce.");
			text = text.replace("de", "de.");

			text = text.replace(".b.", "b.");
			text = text.replace(".c.", "c.");
			text = text.replace(".d.", "d.");

			if (text.charAt(text.length() - 2) == '.') {
				text = text.substring(0, text.length() - 2) + text.substring(text.length() - 1, text.length());
			}

			System.out.println(text.endsWith(".") ? text.substring(0, text.length() - 1) : text);
		}
	}
}