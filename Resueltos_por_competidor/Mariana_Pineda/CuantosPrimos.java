import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : Cuantos Primos
	 * Juez online: omegaUp 
	 * Veredicto: 100%
	 * URL: https://omegaup.com/arena/problem/CuantosPrimos/
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
		for (int i = 2; i * i <= x; i++) {
			if (x % i == 0) {
				return false;
			}
		}
		return true;
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int n = Integer.parseInt(br.readLine());
		while (n-- > 0) {
			st = new StringTokenizer(br.readLine());
			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());
			int c = 0;
			for (int i = a; i <= b; i++) {
				if (esPrimo(i)) {
					c++;
				}
			}
			System.out.println(c);
		}
	}
}
