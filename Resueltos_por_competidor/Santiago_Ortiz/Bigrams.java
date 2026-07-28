import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Bigrams
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/2242/A
 */

public class Bigrams {

	static int contador1;
	static int contador2;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int t;
		t = sc.nextInt();

		for (int i = 0; i < t; i++) {
			int k;
			k = sc.nextInt();
			int[] x = new int[k];

			contador1 = 0;
			contador2 = 0;
			
			for (int j = 0; j < k; j++) {
				x[j] = sc.nextInt();

				if (x[j] >= 3) {
					contador1++;
				}
				if (x[j] >= 2) {
					contador2++;
				}
			}
			if (contador1 >= 1) {
				System.out.println("YES");
			}
			else if (contador2 >= 2) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}

		}
	}

}
