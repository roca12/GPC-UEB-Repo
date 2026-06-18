import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : Area de la figura
	 * Juez online: omegaUp 
	 * Veredicto: 100%
	 * URL: https://omegaup.com/arena/problem/Area-de-la-figura/#problems
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int a = 1;
		int b = 0;
		int c = 1;
		while (a <= n) {
			c = (4 * b) + c;
			a++;
			b++;
		}
		System.out.println(c);
	}
}
