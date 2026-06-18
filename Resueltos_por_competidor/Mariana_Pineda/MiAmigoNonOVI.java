import java.util.Scanner;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : Mi amigo ñoñOVI
	 * Juez online: omegaUp 
	 * Veredicto: 100%
	 * URL: https://omegaup.com/arena/problem/OVI2019---Mi-amigo-nonOVI-/#problems
	 */
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		while (n-- > 0) {
			int a = sc.nextInt();
			int b = sc.nextInt();

			int abajo = (a / b) * b;
			int arriba = abajo + b;

			if (a - abajo < arriba - a) {
				System.out.println(abajo);
			} else {
				System.out.println(arriba);
			}
		}
	}
}
