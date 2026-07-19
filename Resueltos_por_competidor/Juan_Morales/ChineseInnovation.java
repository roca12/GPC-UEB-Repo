/*
 * Autor: OtherSpanish
 * Problema: Chinese Innovation
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106039/problem/F
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;
import java.util.StringTokenizer;

public class Main {

	static final long INF = Long.MAX_VALUE / 4;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken()),
				k = Integer.parseInt(st.nextToken());

		int nodosTotales = n + k;

		ArrayList<int[]>[] adj = new ArrayList[nodosTotales + 1];

		for (int i = 1; i <= nodosTotales; i++)
			adj[i] = new ArrayList<>();

		for (int i = 0; i < m; i++) {
			st = new StringTokenizer(br.readLine());
			int nod1 = Integer.parseInt(st.nextToken());
			int nod2 = Integer.parseInt(st.nextToken());
			int peso = Integer.parseInt(st.nextToken());

			adj[nod1].add(new int[] { nod2, peso });
			adj[nod2].add(new int[] { nod1, peso });
		}

		for (int i = 1; i <= n; i++) {
			int t = Integer.parseInt(br.readLine());
			for (int j = 0; j < t; j++) {
				st = new StringTokenizer(br.readLine());
				int grupo = Integer.parseInt(st.nextToken());
				int costo = Integer.parseInt(st.nextToken());

				adj[i].add(new int[] { n + grupo, costo });
				adj[n + grupo].add(new int[] { i, 0 });

			}

		}

		long[] distancia = new long[nodosTotales + 1];
		Arrays.fill(distancia, INF);

		PriorityQueue<long[]> pq = new PriorityQueue<>((a, b) -> Long.compare(a[0], b[0]));

		distancia[1] = 0;

		pq.add(new long[] { 0, 1 });

		while (!pq.isEmpty()) {
			long[] actual = pq.poll();
			long dist = actual[0];
			int veci = (int) actual[1];
			if (dist != distancia[veci])
				continue;
			if (veci == n)
				break;
			for (int[] vecino2 : adj[veci]) {
				int vecinoRevisando = vecino2[0];
				long nuevaDistancia = dist + vecino2[1];
				if (nuevaDistancia < distancia[vecinoRevisando]) {
					distancia[vecinoRevisando] = nuevaDistancia;
					pq.add(new long[] { nuevaDistancia, vecinoRevisando });
				}
			}
		}

		System.out.println(distancia[n]);

	}

}
