/*
 * Autor: Gabriella Castro
 * Problema: Back to Highschool Physics
 * Juez online: Online Judge
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1012
 */

import java.util.Scanner;

public class BackToHighschoolPhysics {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		while (sc.hasNextInt()) {

			int v = sc.nextInt();
			int t = sc.nextInt();
			
			System.out.println(2*v*t);

		}
	}
}
