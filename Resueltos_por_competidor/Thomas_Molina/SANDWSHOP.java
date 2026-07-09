/*
 * Autor: Thomas Molina
 * Problema: SANDWSHOP
 * Juez online: Codechef
 * Veredicto: Accepted
 * URL: https://www.codechef.com/problems/SANDWSHOP
 */
import java.util.*;

public class SANDWSHOP
{
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		 int A = sc.nextInt();
		 int B = sc.nextInt();
		 int C = sc.nextInt();
		
		int profit = A-(B+C);
		System.out.println(profit);
		 
	}
}
