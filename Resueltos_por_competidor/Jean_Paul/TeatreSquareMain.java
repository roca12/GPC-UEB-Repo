/*
 *  Autor: Jean Paul
 * Problema: A. Theatre Square
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1/A
 */

import java.util.*;

public class TeatreSquareMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		long n = sc.nextInt();
		long m = sc.nextInt();
		long a = sc.nextInt();

		long area = Math.ceilDiv(m, a) * Math.ceilDiv(n, a);
		System.out.println(area);
		
	}
}
