/*
 * Autor: OtherSpanish
 * Problema: School Dance
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1696
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

	static ArrayList<ArrayList<Integer>> adj = new ArrayList<ArrayList<Integer>>();
	static int[] parejas;
	static boolean[] visited;

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken()),
				k = Integer.parseInt(st.nextToken());

		parejas = new int[m + 1];

		for (int i = 0; i < n + 1; i++) {
			adj.add(new ArrayList<>());
		}

		for (int i = 0; i < k; i++) {
			st = new StringTokenizer(br.readLine());
			int hom = Integer.parseInt(st.nextToken()), muj = Integer.parseInt(st.nextToken());
			adj.get(hom).add(muj);
		}

		Arrays.fill(parejas, -1);

		int tot = 0;
		for (int i = 1; i <= n; i++) {
			visited = new boolean[m + 1];
			if (encontrarPareja(i)) {
				tot++;
			}
		}

		StringBuilder sb = new StringBuilder();
		sb.append(tot).append("\n");
		for (int i = 1; i <= m; i++) {
			if (parejas[i] != -1) {
				sb.append(parejas[i] + " " + i + "\n");
			}
		}

		System.out.println(sb);
	}

	static boolean encontrarPareja(int per) {
		for (int candidato : adj.get(per)) {
			if (visited[candidato])
				continue;
			visited[candidato] = true;

			if (parejas[candidato] == -1) {
				parejas[candidato] = per;
				return true;
			} else {
				int revistando = parejas[candidato];
				if (encontrarPareja(revistando)) {
					parejas[candidato] = per;
					return true;
				}

			}

		}

		return false;
	}
}
