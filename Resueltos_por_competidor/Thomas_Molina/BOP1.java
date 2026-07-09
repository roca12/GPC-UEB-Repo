/*
 * Autor: Thomas Molina
 * Problema: BOP1
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/BOP1
 */
 

import java.util.*;

public class BOP1
{
	public static void main (String[] args) 
	{
	    Scanner sc = new Scanner(System.in);
	    int X = sc.nextInt();
	    int Y = sc.nextInt();
	    
	    if (X==Y){
	        System.out.print("Draw");
	    }
	    else if(X>Y){
	        System.out.print("Alice");
	    }
	    else{
	        System.out.print("Bob");
	        
	    }

	}
}
