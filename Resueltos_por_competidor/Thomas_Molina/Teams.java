/*
 * Autor: Thomas Molina
 * Problema: A. Team
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/231/A
 */

import java.util.Scanner;

public class Teams{

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int contador = 0;
		int subcont = 0;
		
		
		for (int j = 0; j<n;j++) {
			subcont = 0;
			
			for (int i = 0; i<3;i++) {
				int a = sc.nextInt();
				if (a==1) {
					subcont++;
				}
			}
			
			if (subcont>=2){
				contador++;
			}
		}
		System.out.println(contador);
		
	}

}