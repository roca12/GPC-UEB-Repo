/*
 *  Autor: Jean Paul
 * Problema: A. The Play Never Ends
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2071/A
 */	

import java.util.Scanner;

public class TPNEMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			int k = sc.nextInt();
			k--;
			if(k % 3 == 0) {
				System.out.println("YES");
			} else {
				System.out.println("NO");				
			}
		}
	}
}
