import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Elephant
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/617/A
 */

public class Elephant {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner (System.in);
		
		int a;
		int pasos = 0;
		
		a = sc.nextInt();
		
		pasos = a / 5;
		
		if(a % 5 != 0) {
			pasos++;
		}
		
		System.out.println(pasos);
		
	}
}
