/*
 * Autor: Gabriella Castro
 * Problema: Stickogon
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1957A
 */

import java.util.HashMap;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();
		HashMap<Integer, Integer> frecuencias = new HashMap<>();

		for (int i = 0; i < t; i++) {
			int conta = 0;
			int n = sc.nextInt();
			frecuencias = new HashMap<>();
			for (int j = 0; j < n; j++) {
				int num = sc.nextInt();
				frecuencias.put(num, frecuencias.getOrDefault(num, 0) + 1);
			}

			for (int entrada : frecuencias.values()) {
				if (entrada > 2) {
					conta +=(int) Math.floor((double)entrada/3);

				}

			}
			System.out.println(conta);

		}

	}

}
