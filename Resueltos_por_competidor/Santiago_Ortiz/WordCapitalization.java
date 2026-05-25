import java.util.Scanner;
 
/*
 * Autor: Darkovski7   
 * Problema: Word Capitalization
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/281/A
 */

public class WordCapitalization {
 
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
		
		String linea = sc.next();
		
		String temp = linea;
		
		StringBuilder sb = new StringBuilder();
		
		for (int i = 0; i < linea.length(); i++) {
			if(i == 0) {
				sb.append(temp.toUpperCase().charAt(0));
			}else {
				sb.append(linea.charAt(i));
			}
		}
		System.out.println(sb.toString());
	}
 
}