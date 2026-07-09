/*
 * Autor: Thomas Molina
 * Problema: P1_175
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/P1_175
 */

import java.util.*;


public class P1_175
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    
	    int X = sc.nextInt();
	    int Y = sc.nextInt();
	    
	    if (X==Y){
	        System.out.print("YES");
	    }
	    else if(X<Y){
	         System.out.print("YES");
	    }
	    else{
	         System.out.print("NO");
	    }

	}
}
