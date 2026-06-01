/*
 *  Autor: Jean Paul
 * Problema: A. Candies for Nephews
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2145/A
 */

import java.util.Scanner;

public class CFNMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t;
		t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int c = sc.nextInt();
			if(c % 3 == 0) {
				System.out.println(0);
			} else {
				System.out.println((3-(c%3)));
			}
		}
	}
}
