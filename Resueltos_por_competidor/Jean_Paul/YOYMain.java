/*
 *  Autor: Jean Paul
 * Problema: A. Yes or Yes
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2178/A
 */

import java.util.Scanner;

public class YOYMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for(int i = 0; i < t; i++) {
			String s = sc.next();
			si(s);
		}
	}
	
	static void si (String s) {
		while(true) {
			String sub1;
			String sub2;
			for(int i = 0; i < s.length()-1; i++) {
				if(s.charAt(i) == 'Y' && s.charAt(i+1) == 'Y') {
					System.out.println("NO");
					return;
				}
				
				if(s.charAt(i) == 'N' && s.charAt(i+1) == 'N') {
					sub1 = s.substring(0, i);
					sub2 = s.substring(i+2, s.length());
					s = sub1 + "N" + sub2;
					break;
				}

				if((s.charAt(i) == 'Y' && s.charAt(i+1) == 'N') || (s.charAt(i) == 'N' && s.charAt(i+1) == 'Y')) {
					sub1 = s.substring(0, i);
					sub2 = s.substring(i+2, s.length());
					s = sub1 + "Y" + sub2;
					break;
				}
			}
			
			if(s.length() == 1) {
				System.out.println("YES");
				return;
			}
		}
	}
}
