/*
* Autor: pgms1103-afk
* Problema: A - Team
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/231/A
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Main {

	static BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int n = Integer.parseInt(br.readLine());
		int contador = 0;
		for (int i = 0; i < n; i++) {
			
			String datos[] = br.readLine().split(" ");
			
			Arrays.sort(datos);
				if (datos[0].contains("0") && datos[1].contains("0")) {
				}else {
					contador++;
				}
			}
			
			System.out.println(contador);

		}
		

	}


