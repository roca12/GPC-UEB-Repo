/*
 *  Autor: Jean Paul
 * Problema: A. A Number Between Two Others
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2225/A
 */

import java.util.Scanner;

public class ANBTOMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		long t;
		t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			long x = sc.nextLong();
			long y = sc.nextLong();
			
			if(x + 1 == y) {
				System.out.println("NO");
			}
			else {				
			si(x, y , x);
			}
		}
	}
	
	static void si(long x, long y, long z) {
		if(z >= y) {
			System.out.println("NO");
			return;
		}
		
		if(z % x == 0) {			
			if(y % z != 0) {				
				System.out.println("YES");
				return;
			}
		}
		z += x;
		si(x, y, z);
	}
}
