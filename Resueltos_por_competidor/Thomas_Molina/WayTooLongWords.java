package a;
/*
 * Autor: Thomas Molina
 * Problema: A. Way Too Long Words
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/71/A
 */

import java.util.Scanner;

public class WayTooLongWords {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		
		for (int i = 0;i<t;i++) {
			String a = sc.next();
			int l = a.length();
			if(l>10){
				String in = a.substring(0, 1);
				int ab = l-1;
				String fin = a.substring(ab,l);
				l = l-2;
				System.out.println(in+l+fin);
			}
			else {
				System.out.println(a);
			}
		}
	}
}
