/*
 * Autor: Gabriella Castro
 * Problema: Digit Counting
 * Juez online: Online Judge
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/external/12/1225.pdf
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class DigitCounting {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		String casos = br.readLine();
		int t = Integer.parseInt(casos.trim());

		for (int i = 0; i < t; i++) {

			String num = br.readLine();
			int n = Integer.parseInt(num.trim());

			int c0 = 0;
			int c1 = 0;
			int c2 = 0;
			int c3 = 0;
			int c4 = 0;
			int c5 = 0;
			int c6 = 0;
			int c7 = 0;
			int c8 = 0;
			int c9 = 0;

			for (int j = 1; j <= n; j++) {
				int numeroActual = j;

				while (numeroActual > 0) {
					int digito = numeroActual % 10;

					if (digito == 0)
						c0++;
					else if (digito == 1)
						c1++;
					else if (digito == 2)
						c2++;
					else if (digito == 3)
						c3++;
					else if (digito == 4)
						c4++;
					else if (digito == 5)
						c5++;
					else if (digito == 6)
						c6++;
					else if (digito == 7)
						c7++;
					else if (digito == 8)
						c8++;
					else if (digito == 9)
						c9++;

					numeroActual /= 10;
				}
			}

			System.out.println(
					c0 + " " + c1 + " " + c2 + " " + c3 + " " + c4 + " " + c5 + " " + c6 + " " + c7 + " " + c8 + " " + c9);
		}
	}
}
