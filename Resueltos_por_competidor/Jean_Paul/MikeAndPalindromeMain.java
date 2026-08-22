/*
 *  Autor: Jean Paul
 * Problema: A. Mike and palindrome
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/798/A
 */

import java.util.Scanner;
 
public class MikeAndPalindromeMain {
	static Scanner sc = new Scanner(System.in);
 
	public static void main(String[] args) {
		String s = sc.next();
 
		int diff = 0;
 
		for (int i = 0; i < s.length() / 2; i++) {
			if (s.charAt(i) != s.charAt(s.length() - 1 - i)) {
				diff++;
			}
		}
		
		if(s.length() % 2 == 0) {			
			System.out.println(diff == 1 ? "YES" : "NO");
		} else {	
			System.out.println(diff <= 1 ? "YES" : "NO");
		}
	}
}