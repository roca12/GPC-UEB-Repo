/*
 * Autor: Juan Andres Garcia
 * Problema: Team
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/231/A
 *  **/

import java.util.Scanner;

public class Team {

	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		
		int n = sc.nextInt();
		
		
		int contador = 0;
		
		for(int i = 0; i < n; i++) {
			
			int manuela = sc.nextInt();
			int juanita = sc.nextInt();
			int natalia = sc.nextInt();
			
			
			
			int suma = manuela + juanita + natalia;
			
			if(suma > 1) {
				
				contador++;
			}
			
		}
		
		System.out.println(contador);
		
		
		
		
	}
}
