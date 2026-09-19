/*
 * Autor: Juan Andres Garcia
 * Problema: New Year Transportation
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/500/A
 *  **/

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class NewYearTransportation {
	
	
	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int cantidadCasas = sc.nextInt();
		int casaLlegada = sc.nextInt();
		boolean llego = false;
		Map<Integer, Integer> portales = new HashMap<>();
		
		
		for(int i = 1; i <= cantidadCasas-1; i++) {
			
			int portal = sc.nextInt();
			
			portales.put(i, i + portal);
			
			
		}
		
		
		int casaActual = 1;
		
		
		while(casaActual < cantidadCasas) {
			
			if(casaActual == casaLlegada) {
				llego = true;
				break;
			} 
			if (casaActual > casaLlegada) {
				break;
			}
			
			casaActual = portales.get(casaActual);
			
		}
		
		if (casaActual == casaLlegada) {
			llego = true;
		}
		
		
		if(llego) {
			
			System.out.println("YES");
		}else {
			
			System.out.println("NO");
		}
	
		
		
	}

}
