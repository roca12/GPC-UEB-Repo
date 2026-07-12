/*
* Autor: pgms1103-afk
* Problema: 2236B - Tatar TV Show
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2236/B
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class TatarTVShow {

	static BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(bf.readLine());
		
		for (int i = 0; i < t; i++) {
			String[] datos = bf.readLine().split(" ");
			boolean hayUno = false;
			int	n = Integer.parseInt(datos[0]);
			int k = Integer.parseInt(datos[1]);
			StringBuilder sb = new StringBuilder(bf.readLine());
			
			for(int j = 0; j<n-k; j++) {
				if(sb.charAt(j) == '1' ) {
					sb.setCharAt(j, '0');
					if(sb.charAt(j+k) == '1') {
						sb.setCharAt(j+k, '0');	
					}else {
						sb.setCharAt(j+k, '1');
					}
									
					//System.out.println("Estoy en el if" + sb);
				}else {

					//System.out.println("Estoy en el else " + sb);
				}
			}
			

			
			for(int j = 0; j<n; j++) {
				if(sb.charAt(j) == '1') {
					hayUno = true;
				//	System.out.println("Estoy en el segudno if" + sb);
					
				}
			}
			
			if(hayUno == true) {
				System.out.println("NO");
			}else {
				System.out.println("YES");
			}
			
		}
		

	}

}
