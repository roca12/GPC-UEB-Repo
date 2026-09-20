/*
 * Autor: Juan Andres Garcia
 * Problema: Way Too Long Words
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/71/A
 *  **/

import java.util.Scanner;

public class WayTooLongWords {

	
	public static void main(String[] args) {
		StringBuilder sb = new StringBuilder();
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();
		
		for(int i = 1; i <= T; i++) {
			String palabra = sc.next();
			
			
			if(palabra.length() <= 10) {
				sb.append(palabra+"\n");
			}else {
				
				String mitad = String.valueOf(palabra.length()-2);
				
				sb.append(palabra.charAt(0) + mitad + palabra.charAt(palabra.length()-1) + "\n");
			}
			
			
			
		}
		
		System.out.println(sb.toString());
		
		
		
	}
}
