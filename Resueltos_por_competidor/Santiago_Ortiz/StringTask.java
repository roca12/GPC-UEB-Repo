import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: String Task
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/118/A
 */

public class StringTask {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		StringBuilder resultado = new StringBuilder();
		
		String palabra;
		palabra = sc.next().toLowerCase();
		
		for (int i = 0; i < palabra.length(); i++) {
			char c = palabra.charAt(i);
			if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
				
				resultado.append('.').append(c);
			}
		}
		System.out.println(resultado.toString());
	}

}
