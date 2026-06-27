import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Soldier and Bananas
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/546/A
 */

public class SoldierAndBananas {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int k = sc.nextInt();
		int n = sc.nextInt();
		int w = sc.nextInt();
		int total = 0;
		int resultado = 0;
		
		for (int i = 1; i < w+1; i++) {
			total += k*i;
			resultado = total - n;
		}
		if(total<n) {
			System.out.println(0);
		} else {
		System.out.println(resultado);
	}
	}
}