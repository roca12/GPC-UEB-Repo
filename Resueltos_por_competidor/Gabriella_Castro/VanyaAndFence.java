/*
 * Autor: Gabriella Castro
 * Problema: Vanya and Fence
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/677/A
 */

import java.util.Scanner;

public class VanyaAndFence {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int h = sc.nextInt();
		int ancho = 0;
		
		for (int i = 0; i < n; i++) {
			int persona = sc.nextInt();
			if(persona > h) {
				ancho += 2;
			}else {
				ancho += 1;
			}
			
		}
		
		System.out.println(ancho);
		
	}

}
