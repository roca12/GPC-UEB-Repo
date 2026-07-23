/*
 * Autor: Gabriella Castro
 * Problema: Two Rabbits
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1304A
 */

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {

			long conejo1 = sc.nextLong();
			long conejo2 = sc.nextLong();
			long dist1 = sc.nextLong();
			long dist2 = sc.nextLong();

			long distancia = dist2 + dist1;
			long conejos = conejo2 - conejo1;

			if (conejos % distancia == 0) {
				System.out.println(conejos / distancia);
			} else {
				System.out.println(-1);
			}

		}

	}

}
