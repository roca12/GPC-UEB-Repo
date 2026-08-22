/*
 * Autor: Thomas Molina
 * Problema: A. Word Capitalization
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/281/A
 */

import java.util.Scanner;

public class WordCapitalization {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		String a = sc.next();
		
		char l0 = a.charAt(0);
		
		if (Character.isLowerCase(l0)) {
			l0 = Character.toUpperCase(l0);
			String res = l0 + a.substring(1);
			System.out.println(res);
		}
		else {
			System.out.println(a);
		}

	}

}
