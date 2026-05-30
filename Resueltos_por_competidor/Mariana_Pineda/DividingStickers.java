import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : D. Dividing Stickers
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/Statements(en).pdf
	 */
	public static long gcd(long a, long b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		long n = Long.parseLong(br.readLine());
		StringTokenizer st = new StringTokenizer(br.readLine());
		long b = 1;
		long[] a = new long[(int) n];
		long suma = 0;
		for (int i = 0; i < n; i++) {
			a[i] = Integer.parseInt(st.nextToken());
			suma += a[i];
		}
		if (n > 1) {
			b = gcd(a[0], a[1]);
		}
		for (int i = 2; i < n; i++) {
			b = gcd(b, a[i]);
		}
		if (n == 1) {
			System.out.println(1);
		} else {
			System.out.println(suma / b);
		}
	}
}
