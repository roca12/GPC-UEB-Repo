/*
 * Autor: OtherSpanish
 * Problema: E. Expansion Plan 2
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106225/problem/E
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws Exception {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		int q = Integer.parseInt(st.nextToken());
		String s = br.readLine();

		// ================= SUMAS DE PREFIJO =================
		// Para responder cada consulta solo necesitamos saber cuántos '8'
		// hay entre las posiciones l y r.
		//
		// pre[i] guarda la cantidad de '8' desde el inicio hasta la posición i.
		// Así, los '8' del rango [l, r] se obtienen con:
		// pre[r] - pre[l - 1]
		//
		// Esto evita recorrer el rango en cada consulta.
		int[] pre = new int[n + 1];
		for (int i = 1; i <= n; i++) {
			pre[i] = pre[i - 1] + (s.charAt(i - 1) == '8' ? 1 : 0);
		}

		StringBuilder sb = new StringBuilder();

		while (q-- > 0) {
			st = new StringTokenizer(br.readLine());

			int l = Integer.parseInt(st.nextToken());
			int r = Integer.parseInt(st.nextToken());

			// La figura generada siempre es simétrica respecto al origen,
			// por eso solo importa la distancia al origen y podemos tomar
			// el valor absoluto de las coordenadas.
			//
			// Usamos long porque x + y puede superar el límite de int.
			long x = Math.abs(Long.parseLong(st.nextToken()));
			long y = Math.abs(Long.parseLong(st.nextToken()));

			// ================= IDEA GEOMÉTRICA =================
			//
			// Cada movimiento '4' expande la región siguiendo la distancia
			// Manhattan (forma de rombo).
			//
			// Cada movimiento '8' permite también desplazarse en diagonal,
			// por lo que expande la región según la distancia Chebyshev
			// (forma de cuadrado).
			//
			// Lo importante es que el orden de los movimientos no cambia
			// el resultado final. Solo importa cuántos '4' y cuántos '8'
			// aparecen en el intervalo.

			long total = r - l + 1; // cantidad total de movimientos
			long b = pre[r] - pre[l - 1]; // cantidad de movimientos '8'

			// Si llamamos:
			// a = cantidad de '4'
			// b = cantidad de '8'
			//
			// entonces siempre deben cumplirse:
			//
			// max(|x|, |y|) <= a + b
			// |x| + |y| <= a + 2b
			//
			// Como a + b = total,
			// entonces a + 2b = total + b.
			boolean ok = Math.max(x, y) <= total && x + y <= total + b;

			sb.append(ok ? "YES" : "NO").append('\n');
		}

		System.out.print(sb);
	}
}
