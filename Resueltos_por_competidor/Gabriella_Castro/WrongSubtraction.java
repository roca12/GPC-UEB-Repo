/*
 * Autor: Gabriella Castro
 * Problema: Wrong Subtraction
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/977/A
 */

import java.util.Scanner;

public class WrongSubtraction {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		long k = sc.nextLong();
		
		
		for (long i = 0; i < k; i++) {
			if(n%10 == 0) {
				n = n/10;
			}else {
				n = n-1;
			}
			
		}
		
		System.out.println(n);
		
	}

}
