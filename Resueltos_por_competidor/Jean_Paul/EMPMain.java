/*
 *  Autor: Jean Paul
 * Problema: B. Even Modulo Pair
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2164/B
 */

import java.util.Scanner;

public class EMPMain {
	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			int [] a = new int [n];
			for(int j = 0; j < n; j++) {
				a[j] = sc.nextInt();
			}
			si(a);
		}
	}
	
	static void si(int [] a) {
		//boolean mod2 = false;
		int x;
		int y;
		for (int i = 0; i < a.length-1; i++) {
			x = a[i];
			for (int j = 1; j < a.length; j++) {
				y = a[j];
				if((y % x) % 2 == 0 && x < y) {
					System.out.println(x + " " + y);
					return;
				}
			}
		}
		System.out.println(-1);
	}
}
