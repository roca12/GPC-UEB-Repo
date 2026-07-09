/*
 * Autor: Thomas Molina
 * Problema: SHOM
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/SHOM
 */
import java.util.*;


public class SHOM
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		int L = sc.nextInt();
		int R = sc.nextInt();
		int resultado = 0;
		
		if (L==R){
		    System.out.print(resultado);
		}
		else if(L<R){
		    resultado = R-L;
		    System.out.print(resultado);
		}
		else if(R<L){
		    resultado = L-R;
		    System.out.print(resultado);
		}
	}
}
