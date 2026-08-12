/*
 * Autor: Thomas Molina
 * Problema: A. Bear and Big Brother
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/791/A
 */

import java.util.Scanner;

public class BearandBigBrother {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int cuenta = 0;
		
		while(a<=b) {
			a = a*3;
			b = b*2;
			cuenta++;
		}
		System.out.println(cuenta);

	}

}
