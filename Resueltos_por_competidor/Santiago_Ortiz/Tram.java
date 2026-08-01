import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Tram
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/116/A
 */

public class Tram {

	static int max = 0;
	static int a = 0;
	static int b = 0;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		for (int i = 0; i < n; i++) {
			 a += sc.nextInt();
			 b += sc.nextInt();

			int pasajeros = b - a;
			
			if (pasajeros > max) {
				max = pasajeros;
			}

		}

		System.out.println(max);
		
	}

}
