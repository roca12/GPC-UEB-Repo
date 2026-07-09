/*
 * Autor: Thomas Molina
 * Problema: TRIANGLE7
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/TRIANGLE7
 */


import java.util.*;

public class TRIANGLE7
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		
		int angulos = 180;
		int resultado = angulos-(A+B);
		
		System.out.print(resultado);
	}
}
