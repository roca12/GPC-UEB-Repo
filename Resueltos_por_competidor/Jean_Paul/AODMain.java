/*
 *  Autor: Jean Paul
 * Problema: A. Odd Divisor
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1475/A
 */

import java.util.Scanner;

public class AODMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			long n = sc.nextLong();
			
			if(n % 2 == 0) {
				
				while(true) {
					if(n == 1) {
						System.out.println("NO");
						break;
					}
					if(n % 2 != 0) {
						System.out.println("YES");
						break;
					}
					
					n /=2;
				}
			} else {
				System.out.println("YES");
			}
		}
	}
}
