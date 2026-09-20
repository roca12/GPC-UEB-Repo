/*
 * Autor: Juan Andres Garcia
 * Problema: Beautiful Matrix
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/263/A
 *  **/


import java.util.Scanner;

public class BeautifulMatrix {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[][] arr = new int[5][5];
		int x = 0;
		int y = 0;
		int xp = 3;
		int yp = 3;

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {

				int num = sc.nextInt();

				arr[i][j] = num;

			}
		}

		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {

				if (arr[i][j] == 1) {

					x = i+1;
					y = j+1;

				}

			}
		}

		int cantMov = (Math.abs(x - xp)) + (Math.abs(y-yp));
		
		System.out.println(Math.abs(cantMov));

	}
}
