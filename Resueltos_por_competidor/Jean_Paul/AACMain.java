/*
 *  Autor: Jean Paul
 * Problema: A. ASCII Art Contest
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2172/A
 */

import java.util.Arrays;
import java.util.Scanner;

public class AACMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int a[] = new int[3];
		a[0] = sc.nextInt();
		a[1] = sc.nextInt();
		a[2] = sc.nextInt();

		Arrays.sort(a);

		if (a[2] - a[0] >= 10) {
			System.out.println("check again");
		} else {
			System.out.println("final " + a[1]);
		}
	}
}
