/*
 * Autor: Juan Andres Garcia
 * Problema: Bit++
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/282/A
 *  **/


import java.util.Scanner;

public class Bitplusplus {

	
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int numOperation =  sc.nextInt();
		
		
		int numero = 0;
		
		
		for(int i = 0; i < numOperation; i++) {
			
			String operacion = sc.next();
			
			if(operacion.contains("+")) {
				numero++;
			}else {
				numero--;
			}
			
			
		}
		
		System.out.println(numero);
		
		
	}
}
