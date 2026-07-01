/*
 * Autor: Gabriella Castro
 * Problema: Elephant
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/617/A
 */

import java.util.Scanner;

public class Elephant {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int x = sc.nextInt();

		int pasos = (x + 4) / 5;

		System.out.println(pasos);

	}
}
