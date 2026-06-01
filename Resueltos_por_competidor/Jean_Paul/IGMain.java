/*
 *  Autor: Jean Paul
 * Problema: A. Ideal Generator
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2093/A
 */

import java.util.Scanner;

public class IGMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t;
		t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int k = sc.nextInt();
			if(k % 2 == 0) {				
				System.out.println("NO");
			} else {
				System.out.println("YES");
			}
		}
	}
}
