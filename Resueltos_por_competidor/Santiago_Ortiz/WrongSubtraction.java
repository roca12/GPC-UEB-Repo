import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Wrong Subtraction
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/977/A
 */

public class WrongSubtraction {

	static int n = 0;
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		n = sc.nextInt();
		int k = sc.nextInt();

		for (int i = 0; i < k ; i++) {

			if ((n % 10) == 0) {
				n = n / 10;
			} else {
				n = n - 1;
			}
		}
		System.out.println(n);
	}

}
