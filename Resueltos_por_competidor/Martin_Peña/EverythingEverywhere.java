/*
* Autor: pgms1103-afk
* Problema: B - Everything Everywhere
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/contest/2226/problem/B
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class EverythingEverywhere {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(br.readLine());
		for (int i = 0; i < t; i++) {
			
			int n = Integer.parseInt(br.readLine());
			int[] arreglo = new int[n];
			String[] arreglo2 = br.readLine().split(" ");
			for (int j = 0; j < arreglo.length; j++) {
				arreglo[j] = Integer.parseInt(arreglo2[j]);
			}
			
			
			int a = 0;
			int b = 0;
			int buenos = 0;
			int diferencia = 0;
			
			for (int j = 0; j < arreglo.length-1; j++) {
				a = arreglo[j];
				b = arreglo[j+1];
				int mcd = mcd(a,b);
				if(a>b) {
					diferencia = a - b;
				}else {
					diferencia = b - a;
				}
				
				if(diferencia == mcd) {
					buenos++;
				}
			}
			
			System.out.println(buenos);
			
			
		}

		
	}

	 static int mcd(int a, int b) {
			if(b == 0) {
				return a;
			}return mcd(b, a % b);
		}
}
