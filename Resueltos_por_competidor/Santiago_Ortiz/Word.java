import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Word
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/59/A
 */

public class Word {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		String palabra = sc.next();
		int contMayus = 0;
		int contMin = 0;

		for (int i = 0; i < palabra.length(); i++) {
			if (Character.isUpperCase(palabra.charAt(i))) {
				contMayus++;
			} else if (Character.isLowerCase(palabra.charAt(i))) {
				contMin++;
			}
		}
		if (contMayus <= contMin) {
			System.out.println(palabra.toLowerCase());
		} else {
			System.out.println(palabra.toUpperCase());
		}
	}

}
