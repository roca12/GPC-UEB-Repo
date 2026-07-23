/*
 * Autor: Gabriella Castro
 * Problema: Dungeon Equilibrium
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/Gym-106225D
 */

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		HashMap<Integer, Integer> frecuencias = new HashMap<>();

		for (int i = 0; i < n; i++) {
			int num = sc.nextInt();
			frecuencias.put(num, frecuencias.getOrDefault(num, 0) + 1);
		}

		int totalRemovidos = 0;

		for (Map.Entry<Integer, Integer> entrada : frecuencias.entrySet()) {
			int x = entrada.getKey();       
			int c_x = entrada.getValue(); 

			if (x == 0) {
				totalRemovidos += c_x;
			} else if (c_x >= x) {
				totalRemovidos += (c_x - x);
			} else {
				totalRemovidos += c_x;
			}
		}

		System.out.println(totalRemovidos);
	}
}
