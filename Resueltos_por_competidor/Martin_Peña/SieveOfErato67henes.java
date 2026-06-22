/*
* Autor: pgms1103-afk
* Problema: 2195A - Sieve of Erato67henes
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2195/A
*/

import java.util.Scanner;

public class SieveOfErato67henes {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			boolean uno = false;
			boolean seissiete = false;

			int[] n = new int[sc.nextInt()];

			for (int j = 0; j < n.length; j++) {
				n[j] = sc.nextInt();
				if (n[j] == 1) {
					uno = true;
				} else if (n[j] == 67) {
					seissiete = true;
				}
			}

			if (uno && seissiete) {
				System.out.println("YES");
			} else if (seissiete) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}

		}

	}

}
