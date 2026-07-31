/*
 *  Autor: Jean Paul
 * Problema: C. Board Moves
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1353/C
 */

import java.util.Scanner;

public class BoardMovesMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			
			long sum = 0;
			for(int j = 1; j <= n/2; j++) {
				sum+=j*(Math.pow((2*j)+1, 2)-Math.pow((2*j)-1,2));
			}
			
			System.out.println(sum);
		}
	}
}
