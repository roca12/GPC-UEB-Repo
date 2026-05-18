/*
 *  Autor: Jean Paul
 * Problema: A. Sum
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1742/A
 */

import java.util.Arrays;
import java.util.Scanner;

public class SUMMain {
	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int t = sc.nextInt();
		int[] array = new int[3];
		for (int i = 0; i < t; i++) {
			for (int j = 0; j < 3; j++) {
				array[j] = sc.nextInt();
			}

			Arrays.sort(array);

			if (array[0] + array[1] == array[2]) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
		}
	}
}
