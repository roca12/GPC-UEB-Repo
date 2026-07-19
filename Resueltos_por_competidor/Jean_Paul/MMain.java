/*
 *  Autor: Jean Paul
 * Problema: B. Deadly Laser
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1721/B
 */


import java.util.Scanner;

public class MMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
	
		for(int i = 0; i < t; i++) {
			int n = sc.nextInt();
			int m = sc.nextInt();
			int x = sc.nextInt();
			int y = sc.nextInt();
			int d = sc.nextInt();
			
			x--;
			y--;
			n--;
			m--;
			if(((x + d >= n && x - d< 1) || (y + d >= m && y - d < 1)) || ((x+d >= n && y + d >= m) ||  (x - d < 1 && y - d < 1))) {
				System.out.println(-1);
			}
			else {
				System.out.println(Math.abs(0-n)+Math.abs(0-m));
			}
		}
	}
}
