/*
* Autor: pgms1103-afk
* Problema: 2227B - Party Monster
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2227/B
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class PartyMonster {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(br.readLine());
		for (int i = 0; i < t; i++) {
			
			int n = Integer.parseInt(br.readLine());
			String s = br.readLine();
			
			
			int corchete1 = 0;
			int corchete2 = 0;
			int contador = 1;
			
			if(n % 2 == 0) {
				for (int j = 0; j < s.length(); j++) {								
					if(s.substring(j, contador).equals("(")){
						corchete1++;
					}else {
						corchete2++;
					}	
					contador++;
				}
				if(corchete1 == corchete2) {
					System.out.println("YES");
				}else {
					System.out.println("NO");
				}
			}else {
				System.out.println("NO");
			}
				
				
				
			
			
			
			
			
		}

	}

}
