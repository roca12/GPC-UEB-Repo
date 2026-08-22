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

		long area = 0;
		if ((n > a && m > a) && a != 1) {
			long ns = (n/a)+((n % a != 0 ? 1 : 0));
			long ms = (m/a)+((m % a != 0 ? 1 : 0));
			area = ns*ms;
			System.out.println(area);
		} else if (n > a && m <= a) {
			area = (n / a);
			System.out.println(area);
		} else if (m > a && n <= a) {
			area = (m / a);
			System.out.println(area);
		} else if(a == 1){
			System.out.println(n*m);
		} else{
			System.out.println(1);
		}
	}
}