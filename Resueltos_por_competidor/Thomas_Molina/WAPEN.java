/*
 * Autor: Thomas Molina
 * Problema: WAPEN
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/WAPEN
 */
import java.util.*;

public class WAPEN
{
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int X = sc.nextInt();
		int Y = sc.nextInt();
		
		int resultado = X + Y * 10;
		
		System.out.print(resultado);
		
	}
}
