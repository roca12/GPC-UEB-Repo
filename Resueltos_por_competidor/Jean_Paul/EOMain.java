/*
 *  Autor: Jean Paul
 * Problema: A. Even Odds
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/318/A
 */

import java.util.Scanner;

public class EOMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		long n = sc.nextLong();
		long k = sc.nextLong();
		
		if(n % 2 != 0)
			n++;
		
		si(n, k);
	}
	
	static void si(long n, long k) {
		if((n/2) < k) {
			k-=(n/2);
			long a = (2*k);
			System.out.println(a);
			return;
		} else {
			long a = (2*k)-1;
			System.out.println(a);
			return;
		}
	}
}
