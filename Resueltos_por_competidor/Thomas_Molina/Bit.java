/*
 * Autor: Thomas Molina
 * Problema: A. Bit++
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL:https://codeforces.com/problemset/problem/282/A
 */


import java.util.Scanner;

public class Bit {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int contadorP = 0;
		int contadorN = 0;
		
		for (int i = 0 ; i<n; i++) {
			String a = sc.next();
			if (a.equals("X++")|a.equals("++X")) {
				contadorP++;
			}
			else if (a.equals("X--")|a.equals("--X")) {
				contadorN++;
				
			}
		}
		
		System.out.println(contadorP-contadorN);

	}

}
