import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Theatre Square
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/1/A
 */

public class TheatreSquare {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		long n;
		long m;  //recordar numeros que pueden ser muy grandes para un int
		long a;
		long contador;
		
		n = sc.nextLong();
		m = sc.nextLong();
		a = sc.nextLong();
		
		long x = Math.ceilDiv(n, a);
		long y = Math.ceilDiv(m, a);
		contador = x*y;

		System.out.println(contador);
	}

}
