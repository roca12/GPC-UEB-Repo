/*
* Autor: pgms1103-afk
* Problema: 2230A - Optimal Purchase
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2230/A
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class OptimalPurchase {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(br.readLine());
		
		for (int i = 0; i < t; i++) {
			String[] datos = br.readLine().split(" ");
			long n = Integer.parseInt(datos[0]);
			long a = Integer.parseInt(datos[1]);
			long b = Integer.parseInt(datos[2]);
			
			
			long grupoDeTres = n / 3;
			long sobrante = n % 3;
			
			
			long costoUnGrupo = Math.min(b, 3*a);
			long costoUno = 0;
			
			if(sobrante == 0 ) {
				 costoUno = 0;
			}else if(sobrante == 1) {
				 costoUno = Math.min(a, b);
			}else {
				 costoUno = Math.min(2*a, b);
			}
			
			long costoGrupos = costoUnGrupo * grupoDeTres;
			
			System.out.println(costoGrupos + costoUno);
				


		}
		
		
	}

}
