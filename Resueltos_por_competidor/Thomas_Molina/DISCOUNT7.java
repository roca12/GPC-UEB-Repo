/*
 * Autor: Thomas Molina
 * Problema: DISCOUNT7
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/DISCOUNT7
 */

import java.util.*;

public class DISCOUNT7
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int N = sc.nextInt();
	    int resultado = 0;
	    
	    if (N>=5){
	        resultado = N*85;
	        System.out.print(resultado);
	    }
	    else{
	        resultado = N*100;
	        System.out.print(resultado);
	    }

	}
}
