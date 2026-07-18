/*
 * Autor: OtherSpanish
 * Problema: Planets and Kingdoms
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1683
 */


import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;
import java.util.StringTokenizer;

public class Main {

	static ArrayList<ArrayList<Integer>> graph = new ArrayList<>();
	static ArrayList<ArrayList<Integer>> reverseGraph = new ArrayList<>();

	static ArrayList<Integer> orden = new ArrayList<>();

	static boolean[] visited;
	static int[] component;

	public static void main(String[] args) throws Exception {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());

		visited = new boolean[n + 1];
		component = new int[n + 1];

		for (int i = 0; i <= n; i++) {
			graph.add(new ArrayList<Integer>());
			reverseGraph.add(new ArrayList<Integer>());
		}

		for (int i = 0; i < m; i++) {
			st = new StringTokenizer(br.readLine());

			int a = Integer.parseInt(st.nextToken());
			int b = Integer.parseInt(st.nextToken());

			graph.get(a).add(b);
			reverseGraph.get(b).add(a);
		}

		for (int i = 1; i <= n; i++) {
			if (!visited[i])
				dfsInOrder(i);
		}

		Collections.reverse(orden);

		int reinos = 0;

		for (int u : orden) {
			if (component[u] == 0) {
				reinos++;
				dfsReverse(u, reinos);
			}
		}

		StringBuilder sb = new StringBuilder();

		sb.append(reinos).append("\n");

		for (int i = 1; i <= n; i++) {
			
			sb.append(component[i]).append(" ");
		}

		System.out.println(sb);
	}

	static void dfsInOrder(int u) {

		visited[u] = true;

		for (int v : graph.get(u)) {

			if (!visited[v])

				dfsInOrder(v);
		}

		orden.add(u);
	}

	static void dfsReverse(int u, int id) {
		component[u] = id;

		for (int v : reverseGraph.get(u)) {
			if (component[v] == 0)
				dfsReverse(v, id);
		}
	}
}
