/*
 *  Autor: Jean Paul
 * Problema: A. Beautiful Matrix
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/263/A
 */

import java.util.Scanner;

public class BMMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int[][] a = new int[5][5];
		int b= 0;
		int c = 0;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				a[i][j] = sc.nextInt();
				
				if(a[i][j] == 1) {
					b = Math.abs(i-2);
					c = Math.abs(j-2);
				}
			}
		}
		System.out.println(b+c);
	}
}