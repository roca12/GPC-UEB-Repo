/*
 * Autor: Gabriella Castro
 * Problema: Alarm Clock
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/contest/841803#problem/A
 */

import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		while(true) {
		
		int h1 = sc.nextInt();
		int m1 = sc.nextInt();
		int h2 = sc.nextInt();
		int m2 = sc.nextInt();
		
		if((h1 == 0 && h2 == 0)&&(m1==0 && m2 == 0)) {
			break;
		}
		
		int minutosInicio = h1 * 60 + m1;
		int minutosFin = h2 * 60 + m2;
		
		int diferencia = minutosFin - minutosInicio;
		if(diferencia < 0) {
			diferencia += 1440;
		}
		
		System.out.println(diferencia);
		}
		
	}

}
