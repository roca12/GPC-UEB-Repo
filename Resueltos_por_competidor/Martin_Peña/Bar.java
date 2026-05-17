/*
* Autor: pgms1103-afk
* Problema: A- BAR
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/56/A?adcd1e=caf4fnelo47y03&csrf_token=c47ae6c4e819500adb35b986b2f410b1
*/

import java.util.Scanner;

public class Bar {

	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		
		int t = sc.nextInt();
		int contador = 0;

		
		String[] bebidasAlcohol = new String[11];
		bebidasAlcohol[0] = "ABSINTH";
		bebidasAlcohol[1] = "BEER";
		bebidasAlcohol[2] = "BRANDY";
		bebidasAlcohol[3] = "CHAMPAGNE";
		bebidasAlcohol[4] = "GIN";
		bebidasAlcohol[5] = "RUM";
		bebidasAlcohol[6] = "SAKE";
		bebidasAlcohol[7] = "TEQUILA";
		bebidasAlcohol[8] = "VODKA";
		bebidasAlcohol[9] = "WHISKEY";
		bebidasAlcohol[10] = "WINE";
		for (int i = 0; i < t; i++) {
			
			String dato = sc.next();
			
			try {
			int datoNum = Integer.parseInt(dato);
			if(datoNum < 18) {
				contador++;
			}		
			}catch(NumberFormatException e) {
				for (int j = 0; j < bebidasAlcohol.length; j++) {
					if(dato.equals(bebidasAlcohol[j])) {
						contador++;
					}
			}
			
			
			}
			
			
			
		}
		
		System.out.println(contador);
	}

}
