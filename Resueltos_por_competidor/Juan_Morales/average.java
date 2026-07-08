/*
 * Autor: OtherSpanish
 * Problema: Average
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://codeforces.com/nomeacuerdo
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Average {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		String s = br.readLine();
		int n = s.length();
		long suma = 0;

		long[] cnt = new long[10];

		for (int d = 0; d <= 9; d++) {
			long rachActual = 0;
			long total = 0;

			for (int i = 0; i < n; i++) {
				int digito = s.charAt(i) - '0';

				if (digito <= d) {
					rachActual++;
				} else {
					total += rachActual * (rachActual + 1) / 2;
					rachActual = 0;
				}
			}
			total += rachActual * (rachActual + 1) / 2;
			cnt[d] = total;
		}

		for (int d = 0; d <= 9; d++) {
			long cantExacta = cnt[d] - (d > 0 ? cnt[d - 1] : 0);
			suma += (long) d * cantExacta;
		}

		long numerador = suma;
		long denominador = (long) n * (n + 1) / 2;

		long mcd = mcd(numerador, denominador);
		numerador = numerador / mcd;
		denominador = denominador / mcd;

		if (denominador == 1) {
			pw.println(numerador);
		} else if (numerador < denominador) {
			pw.println(numerador + "/" + denominador);
		} else {
			long parteEntera = numerador / denominador;
			long resto = numerador % denominador;
			if (resto == 0) {
				pw.println(parteEntera);

			} else {
				pw.println(parteEntera + " " + resto + "/" + denominador);

			}
		}
		pw.flush();
	}

	static long mcd(long a, long b) {
		if (b == 0)
			return a;
		return mcd(b, a % b);
	}
}
