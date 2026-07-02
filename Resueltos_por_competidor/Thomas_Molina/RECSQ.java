/*
 * Autor: Thomas Molina
 * Problema: RECSQ
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/RECSQ
 */
import java.util.*;


public class RECSQ
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		
		int rect = A * B;
		int cuadrado = C*C;
		
		if (rect==cuadrado){
		    System.out.print("YES");
		}
		else{
		    System.out.print("NO");
		}
	}
}
