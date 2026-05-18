/*
 *  Autor: Jean Paul
 * Problema: B. Dictionary
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1674/B
 */


import java.util.Scanner;

public class DMain {
	static Scanner sc = new Scanner(System.in);
	static final char[] ABC = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
			'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

	public static void main(String[] args) {

		int t = sc.nextInt();
		String s;
		for (int i = 0; i < t; i++) {
			s = sc.next();
			System.out.println(si(s));
		}
	}

	static int si(String a) {
		int position = 1;
		for (int i = 0; i < 26; i++) {
			for (int j = 0; j < 26; j++) {
				String c = "" + ABC[i] + ABC[j];
				if (a.equals(c)) {
					return position;
				}
				if (i == j) {
					position--;
				}
				position++;
			}
		}
		return position;
	}
}