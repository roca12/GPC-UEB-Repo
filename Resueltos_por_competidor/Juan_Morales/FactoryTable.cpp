/*
 * Autor: OtherSpanish
 * Problema: F. Factory Table
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106225/problem/F
 */


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		StringBuilder sb = new StringBuilder();

		while (t-- > 0) {
			int n = Integer.parseInt(br.readLine());
			long[] a = new long[n];
			StringTokenizer st = new StringTokenizer(br.readLine());
			for (int i = 0; i < n; i++)
				a[i] = Long.parseLong(st.nextToken());

			// Escenario 1: hay corte entre a[0] y a[1], o sea a[0] cierra su
			// fila: a[0] = fila*k. Entonces k es divisor de a[0] y el
			// arranque queda forzado: col0 = k, fila = a[0]/k. Un solo
			// arranque por candidato (esta es la poda que evita el TLE:
			// solo factorizamos a[0], y candidato+arranque van amarrados).
			ArrayList<Long> divisores = new ArrayList<>();
			for (long d = 1; d * d <= a[0]; d++) {
				if (a[0] % d == 0) {
					divisores.add(d);
					if (d != a[0] / d)
						divisores.add(a[0] / d);
				}
			}
			Collections.sort(divisores);

			long respuesta = Long.MAX_VALUE;

			for (long k : divisores) {
				long fila = a[0] / k;
				if (fila > k)
					continue; // la fila no existe en una tabla kxk

				// simulamos desde (fila, col=k): a[0] es fin de fila
				long f = fila, col = k;
				boolean ok = true;
				for (int i = 1; i < n && ok; i++) {
					col++;
					if (col > k) { // fin de fila: salto a la siguiente
						f++;
						col = 1;
						if (f > k) {
							ok = false;
							break;
						} // se acabo la tabla
					}
					if (a[i] != f * col)
						ok = false;
				}
				// divisores esta ordenado: el primero que encaja es el
				// minimo de este escenario
				if (ok) {
					respuesta = Math.min(respuesta, k);
					break;
				}
			}

			// Escenario 2: a[0] y a[1] estan en la misma fila. La fila queda
			// fijada por la diferencia: fila = a[1]-a[0] (positiva y debe
			// dividir a a[0]). Avanzamos por la fila hasta donde alcance;
			// el primer corte necesario define k exactamente.
			long d = a[1] - a[0];
			if (d > 0 && a[0] % d == 0) {
				long fila = d;
				long col0 = a[0] / d;
				int i = 1;
				long col = col0;
				// tramo inicial: mientras el siguiente elemento continue la fila
				while (i < n && a[i] == fila * (col + 1)) {
					col++;
					i++;
				}
				long k2;
				if (i == n) {
					// sin corte: todo cabe en la fila. k minimo = la columna
					// final, pero la fila tambien debe existir: k >= fila
					k2 = Math.max(fila, col);
				} else {
					// corte: a[i-1] era la ultima columna de la fila,
					// entonces k queda determinado: k = col
					k2 = col;
					long f = fila;
					boolean ok = fila <= k2;
					long cc = col;
					// verificamos el resto del subarreglo con ese k fijo
					for (; i < n && ok; i++) {
						cc++;
						if (cc > k2) {
							f++;
							cc = 1;
							if (f > k2) {
								ok = false;
								break;
							}
						}
						if (a[i] != f * cc)
							ok = false;
					}
					if (!ok)
						k2 = -1;
				}
				if (k2 > 0 && fila <= k2 && col0 <= k2) {
					respuesta = Math.min(respuesta, k2);
				}
			}

			sb.append(respuesta).append('\n');
		}

		System.out.print(sb);
	}
}
