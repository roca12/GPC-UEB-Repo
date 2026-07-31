import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Translation
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/41/A
 */

public class Translation {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String s = sc.next();
		String s2 = sc.next();
		
		String inverso = new StringBuilder(s).reverse().toString();
		
		if (inverso.equals(s2)) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}

}
