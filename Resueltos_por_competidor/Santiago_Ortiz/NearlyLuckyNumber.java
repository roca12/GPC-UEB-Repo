import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Nearly Lucky Number
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/110/A
 */

public class NearlyLuckyNumber {

	static int contador = 0;

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		long n = sc.nextLong();
		boolean lucky = true;

		String ns = Long.toString(n);
		for (int i = 0; i < ns.length(); i++) {
			char c = ns.charAt(i);
			if (c == '4' || c == '7') {
				contador++;
			}
		}
		if(contador == 4 || contador == 7) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}

}
