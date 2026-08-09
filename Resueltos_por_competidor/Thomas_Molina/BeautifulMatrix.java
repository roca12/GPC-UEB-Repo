/*
 * Autor: Thomas Molina
 * Problema: A. Beautiful Matrix
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/263/A
 */

import java.util.Scanner;

public class BeautifulMatrix {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int[][] matrix = new int[5][5];
		
		int posx = 0;
		int posy = 0;
		
		int count = 0;
		
		for (int i = 0;i<5;i++) {
			for (int j = 0;j<5;j++) {
				matrix[i][j] = sc.nextInt();
				if (matrix[i][j]==1) {
					posy = i;
					posx = j;
				}
			}
			}
		int center = 2;
		
		while(center!=posx||center!=posy) {
			if (posx<center) {
				posx++;
				count ++;
			}
			else if (posx>center) {
				posx--;
				count ++;
			}
			
			if (posy<center) {
				posy++;
				count ++;
			}
			else if (posy>center) {
				posy--;
				count ++;
			}
		}
		if (posx==center&&posy==center) {
			System.out.println(count);
			
		}
	}

}