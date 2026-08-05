package a;
/*
 * Autor: Thomas Molina
 * Problema: A. Petya and Strings
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/112/A
 */

import java.util.Scanner;

public class PetyaandStrings {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next();
		String b = sc.next();
		a = a.toLowerCase();
		b = b.toLowerCase();
		int c = a.compareTo(b);
		if (c<0) {
			c=-1;
		}
		if (c>0) {
			c=1;
		}
		System.out.println(c);
	}

}
