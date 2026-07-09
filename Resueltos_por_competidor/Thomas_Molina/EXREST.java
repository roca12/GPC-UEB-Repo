/*
 * Autor: Thomas Molina
 * Problema: EXREST
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/EXREST
 */

import java.util.*;

public class EXREST
{
	public static void main (String[] args)
	{
	    Scanner sc = new Scanner(System.in);
	    int N = sc.nextInt();
	    int dias = 0;
	    
	    for (int i= 0; i<N;i++){
	        dias= dias +3;
	    }
	    System.out.print(dias);
	}
}
