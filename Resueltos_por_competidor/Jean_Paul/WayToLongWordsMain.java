/*
 *  Autor: Jean Paul
 * Problema: A. Way Too Long Words
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/71/problem/A
 */

import java.util.Scanner;

public class WayToLongWordsMain {
	static Scanner sc = new Scanner(System.in);
	 
	public static void main(String[] args) {
		int n = sc.nextInt();
		for(int i = 0; i < n; i++) {
			String s = sc.next();
			if(s.length() > 10) {
				String sub = s.charAt(0)+"";
				sub+=s.length()-2;
				sub +=s.charAt(s.length()-1);
				System.out.println(sub);
			} else {
				System.out.println(s);
			}
		}
	}
}
