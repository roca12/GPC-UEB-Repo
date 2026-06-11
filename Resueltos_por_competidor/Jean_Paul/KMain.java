/*
 *  Autor: Jean Paul
 * Problema: A. Koshary
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2227/A
 */

import java.util.Scanner;

public class KMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t;
		t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int x = sc.nextInt();
			int y = sc.nextInt();
			
			if(x % 2 != 0 && y % 2 != 0) {
				System.out.println("NO");
			}
			
			else {
				System.out.println("YES");
			}
		}
	}
}
