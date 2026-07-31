import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Football
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/96/A
 */

public class Football {

	static int cont = 1;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String s = sc.next();

		for (int i = 0; i < (s.length() - 1); i++) {

			char actual = s.charAt(i);
			char siguiente = s.charAt(i + 1);

			if (cont == 7) {
				break;
			} else if (actual == siguiente) {
				cont++;
			} else {
				cont = 1;
			}
		}

		if (cont >= 7) {
			System.out.println("YES");
		} else if (cont < 7) {
			System.out.println("NO");
		}
	}
}
