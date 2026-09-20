/*
 * Autor: Juan Andres Garcia
 * Problema: Calculatin Function
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/486/A
 *  **/



import java.math.BigInteger;
import java.util.Scanner;

public class CalcularFunctions {

	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		BigInteger n = sc.nextBigInteger();
		
		
		BigInteger result = BigInteger.ZERO;
		
		
		if(n.mod(BigInteger.valueOf(2)).equals(BigInteger.ZERO)) {
			result = n.divide(BigInteger.valueOf(2));
		}else {
			
			result = (n.add(BigInteger.ONE)).divide(BigInteger.valueOf(2));
			result = result.multiply(BigInteger.valueOf(-1));
		}

		System.out.println(result);
		
		
	}
	

}
