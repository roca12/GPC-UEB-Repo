/*
* Autor: pgms1103-afk
* Problema: A. Beautiful Matrix
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/263/A
*/

import java.util.Scanner;

public class BeautifulMatrix {

	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		int[][] matriz = new int[5][5];;
		for (int i = 0; i < 5; i++) {			
			for (int j = 0; j < 5; j++) {
				matriz[i][j] = sc.nextInt();
			}
		}
		
		for (int i = 0; i < 5; i++) {			
			for (int j = 0; j < 5; j++) {
				if(matriz[i][j] == 1) {
					int restaI = i - 2;
					int restaJ = j - 2;
					int suma = Math.abs(restaI)+Math.abs(restaJ);				
					System.out.println(Math.abs(suma));
				}
			}
		}
		
		

		

	}

}
