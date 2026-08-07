/*
 *  Autor: Jean Paul
 * Problema: A. Diversity
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/844/A
 */

import java.util.Arrays;
import java.util.Scanner;
 
public class DiversityMain {
 
	static Scanner sc = new Scanner(System.in);
 
	public static void main(String[] args) {
		String s = sc.next();
 
		int k = sc.nextInt();
 
		if (k > s.length()) {
			System.out.println("impossible");
		} else if (k == 1) {
			System.out.println(0);
		} else {
			char[] chars = new char[s.length()];
			for (int j = 0; j < s.length(); j++) {
				chars[j] = s.charAt(j);
			}
 
			Arrays.sort(chars);
			
			int diff = 0;
			for (int j = 0; j < s.length() - 1; j++) {
				if (chars[j] != chars[j + 1]) {
					diff++;
				} 
			}
 
			System.out.println(k > diff? k-diff -1: 0);
		}
	}
}
