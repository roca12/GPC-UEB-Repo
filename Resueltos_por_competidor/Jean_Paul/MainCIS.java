/*
 *  Autor: Jean Paul
 * Problema: C. Can I Square?
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1915/C
 */

import java.util.Scanner;

public class MainCIS {
	static Scanner sc = new Scanner(System.in);
	static final int MAX = 2*100000;
	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			long sum = 0;
			for(int j = 0; j < n; j++) {
				sum += sc.nextInt();
			}
			
			double sqrt = Math.sqrt(sum);
			int intSqrt = (int) Math.sqrt(sum);
			double pS = (double)intSqrt;

			if(sqrt == pS) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}