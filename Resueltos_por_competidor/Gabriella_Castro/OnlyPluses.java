/*
 * Autor: Gabriella Castro
 * Problema: Only Pluses
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1992A
 */

import java.util.Scanner;

public class Main{

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {

			int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();

			for (int j = 1; j <= 5; j++) {

				if (a <= b && a <= c) {
					a = a + 1;
				} else if (b <= c) {
					b = b + 1;
				} else {
					c = c + 1;
				}
			}
			
			System.out.println(a*b*c);

		}

	}

}
