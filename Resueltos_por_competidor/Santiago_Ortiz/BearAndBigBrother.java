import java.util.Scanner;
 
/*
 * Autor: Darkovski7   
 * Problema: Bear and Big Brother
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/791/A
 */

public class BearAndBigBrother {
 
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
		
		int a;
		int b;
		int contador = 0;
		
		a = sc.nextInt();
		b = sc.nextInt();
		
		for (int i = 0; a <= b; i++) {
			contador = i;
			b = b*2;
			a = a*3;
		}
		System.out.println((contador+1));
	}
 
}