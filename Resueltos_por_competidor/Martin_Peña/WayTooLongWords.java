/*
* Autor: pgms1103-afk
* Problema: 71A - Way Too Long Words
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/71/A
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class  WayTooLongWords {

	static BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		
		int n = Integer.parseInt(br.readLine());
		
		for (int i = 0; i < n; i++) {
			String palabra = br.readLine();
			StringBuilder palabraSalida = new StringBuilder();
			if(palabra.length() > 10) {
				palabraSalida.append(palabra.charAt(0));
				palabraSalida.append(palabra.length()-2);
				palabraSalida.append(palabra.charAt(palabra.length()-1));
				System.out.println(palabraSalida);
			}else {
				System.out.println(palabra);
			}
		}

	}

}
