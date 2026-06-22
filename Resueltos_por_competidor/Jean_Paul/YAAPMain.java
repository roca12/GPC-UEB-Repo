/*
 *  Autor: Jean Paul
 * Problema: D. Yet Another Array Problem
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2167/D
 */

import java.util.Scanner;

public class YAAPMain {
	static Scanner sc = new Scanner(System.in);
	static final long MAX = 1000000000000000000l;
	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			long[] a = new long[n];
			for (int j = 0; j < n; j++) {
				a[j] = sc.nextLong();
			}
			si(a);
		}
	}

	static void si(long[] a) {
		for (int i = 2; i <= MAX; i++) {
			for (int j = 0; j < a.length; j++) {
				if(gcd(i, a[j]) == 1){
					System.out.println(i);
					return;
				}
			}
		}
		System.out.println(-1);
	}
	
	static long gcd(long a, long b) {
		return b == 0 ? a : gcd(b, a % b);
	}
}
