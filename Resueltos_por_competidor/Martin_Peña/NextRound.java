/*
* Autor: pgms1103-afk
* Problema: A. Next Round
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/158/A
*/
import java.util.Scanner;

public class NextRound {

	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		int n = sc.nextInt();
		int k = sc.nextInt();
		int[] competidores = new int[n];
		for (int i = 0; i < competidores.length; i++) {
			competidores[i] = sc.nextInt();
		}
		
		int puntajeMinimo = competidores[k-1];
		int resultado = 0;
		
		for (int i = 0; i < competidores.length; i++) {
			if(competidores[i] >= puntajeMinimo && competidores[i] != 0) {
				resultado++;
			}
		}
		
		System.out.println(resultado);

		

	}

}
