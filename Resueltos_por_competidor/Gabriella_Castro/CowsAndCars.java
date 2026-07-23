/*
 * Autor: Gabriella Castro
 * Problema: Cows and Cars
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/UVA-10491
 */

import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		
		Scanner
		sc = new Scanner(System.in);
		
		while(sc.hasNextInt()) {
			
			int vacas = sc.nextInt();
			int carros = sc.nextInt();
			int puertasAb = sc.nextInt();
			
			
			double arriba = carros * (vacas + carros - 1);
			
			double abajo = (carros + vacas) * (vacas + carros - puertasAb - 1);
			
			double rest = arriba / abajo;
			
			System.out.printf("%.5f",rest);
			System.out.println();
			
		}
		
	}
	
}
