import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : Tarea 3 Curso Robot C ULAM
	 * Juez online: omegaUp 
	 * Veredicto: 100%
	 * URL: https://omegaup.com/arena/problem/Tarea-3-Curso-Robot-C-ULAM/
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		while (n > 1) {
			System.out.print(n + " ");
			if (n % 2 == 0) {
				n = n / 2;
			} else {
				n = n * 3;
				n++;
			}
		}
		System.out.println(n);
	}
}
