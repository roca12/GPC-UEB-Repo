/*
 * Autor: Thomas Molina
 * Problema: VACAEX
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/VACAEX
 */
import java.util.*;


public class VACAEX
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	    int X = sc.nextInt();
	    int Y = sc.nextInt();
	    int nivel = 0;
	    
	    for (int i = 0; i<X;i++){
	        nivel = Y+i;
	    }
	    System.out.print(nivel);
	}
}
