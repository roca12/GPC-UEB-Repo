/*
 * Autor: OtherSpanish
 * Problema: Mount rushmore and birtdays
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/101064/problem/K
 */

import java.util.Iterator;
import java.util.Scanner;

public class Main{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double n = sc.nextDouble();
		double p = 1.0;
		int pp = 0;

		while (p > 0.5) {
			p *= ((double) (n - pp) / n);
			pp++;
		}

		System.out.println(pp);
	}

}
