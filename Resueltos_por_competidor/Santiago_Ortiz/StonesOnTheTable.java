import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Stones on the Table
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/266/A
 */

public class StonesOnTheTable {

	static int contador;
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String stones = sc.next();
		char one = ' ';
		char two = ' ';
		
		for (int i = 0; i < n-1; i++) {
			one = stones.charAt(i);
			two = stones.charAt(i + 1);
			
			if (one == two) {
				contador++;
			}
		}
		System.out.println(contador);
	}

}
