/*
 * Autor: Thomas Molina
 * Problema: A. Next Round
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/158/A
 */


import java.util.Scanner;

public class NextRound {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		
		int a = sc.nextInt();
		int b = sc.nextInt();
		int[] e = new int[a];
		
		for (int i = 0 ; i<a;i++) {
			e[i] = sc.nextInt();
		}
		
		int f = e[b-1];
		int contador = 0;
				
		for (int i = 0 ; i<a;i++) {
			if (e[i]>=f && e[i]>0) {
				contador++;
			}
		}
		
		System.out.println(contador);
	}

}
