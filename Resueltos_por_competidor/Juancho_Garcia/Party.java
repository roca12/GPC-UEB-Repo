
/*
 * Autor: Juan Andres Garcia
 * Problema: Party
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/115/A
 *  **/


import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Party {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int numEmpleados = sc.nextInt();

		Map<Integer, Integer> invitados = new HashMap<>();

		for (int i = 1; i <= numEmpleados; i++) {

			int p = sc.nextInt();

			invitados.put(i, p);

		}

		int maxNivel = 0;

		for (int i = 1; i <= numEmpleados; i++) {
			int nivel = 1;
			int actual = i;
			while (invitados.get(actual) != -1) {
				actual = invitados.get(actual);
				nivel++;
			}
			maxNivel = Math.max(maxNivel, nivel);
		}

		System.out.println(maxNivel);
	}

}
