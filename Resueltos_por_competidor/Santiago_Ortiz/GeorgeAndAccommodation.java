import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: George and Accommodation
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/467/A
 */

public class GeorgeAndAccommodation {

	static int contador = 0;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		for (int i = 0; i < n; i++) {

			int p = sc.nextInt();
			int q = sc.nextInt();

			if ((q - p) >= 2) {
				contador++;
			}
		}
		System.out.println(contador);
	}

}
