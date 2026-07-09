/*
 * Autor: Thomas Molina
 * Problema: POPCORN7
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/POPCORN7
 */
 
import java.util.*;


public class POPCORN7
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner (System.in);
	    int X = sc.nextInt();
	    
	    int count = 0;

	    X = X-100;
	    
	        while(X>=50){
	            X = X-50;
	            count = count+1;
	        }
	    System.out.println(count);
	}
}
