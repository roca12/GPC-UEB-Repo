import java.io.IOException;
import java.util.Scanner;

public class Main{
	/*
	 * Autor: mariana 
	 * Problema : Arreglo de primos
	 * Juez online: omegaUp 
	 * Veredicto: 100%
	 * URL: https://omegaup.com/arena/problem/Arreglo-de-primos/#problems
	 */
	public static boolean esPrimo(int x) {
		if (x < 2) {
			return false;
		}
		if (x == 2) {
			return true;
		}
		if (x % 2 == 0) {
			return false;
		}

		for (int i = 3; i * i <= x; i += 2) {
			if (x % i == 0) {
				return false;
			}
		}

		return true;
	}

	public static void main(String[] args) throws IOException {
		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();

		int[] num = new int[n];
		for (int i = 0; i < n; i++) {
			num[i] = sc.nextInt();
		}

		int a = sc.nextInt();
		int b = sc.nextInt();

		int c = 0;

		for (int i = 0; i < n; i++) {
			if (num[i] >= a && num[i] <= b && esPrimo(num[i])) {
				c++;
			}
		}

		System.out.println(c);
	}
}
