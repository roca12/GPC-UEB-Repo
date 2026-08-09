/*
 * Autor: Thomas Molina
 * Problema: A. Domino piling
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/50/A
 */


import java.util.Scanner;

public class Dominopiling {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m = sc.nextInt();
		int n = sc.nextInt();
		
		int r = (m*n)/2;
		
		System.out.println(r);
	}

}