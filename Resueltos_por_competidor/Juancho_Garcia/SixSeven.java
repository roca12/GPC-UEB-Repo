package ejercicios;

/*
 * Autor: JuanchoEspriella
 * Problema: The 67th 6-7 Integer Problem (https://codeforces.com/problemset/problem/2218/B)
 * Juez online: Codeforce
 * Veredicto: accepted  
 * ANASHEI
 * */
import java.util.Scanner;

public class SixSeven {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		for (int i = 1; i <= t; i++) {
			int sumaTotal = 0;
			int maxElemento = Integer.MIN_VALUE;

			for (int j = 0; j < 7; j++) {
				int num67 = sc.nextInt();
				sumaTotal += num67;

				if (num67 > maxElemento) {
					maxElemento = num67;
				}
			}

			int resultado67 = -sumaTotal + (2 * maxElemento);
			System.out.println(resultado67);
		}
	}
}
