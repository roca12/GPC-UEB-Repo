/*
 * Autor: OtherSpanish
 * Problema: Download Speed
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1694
 */



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
	public static void main(String args[]) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());

		int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
		Graph g = new Graph(n + 1);
		for (int i = 0; i < m; i++) {
			st = new StringTokenizer(br.readLine());
			g.addEdge(Integer.parseInt(st.nextToken()), Integer.parseInt(st.nextToken()),
					Long.parseLong(st.nextToken()));
		}

		System.out.printf("%d", g.DinicMaxflow(1, n));

	}
}

class Edge {
	public int v;

	public long flow;

	public long C;

	public int rev;

	public Edge(int v, long flow, long C, int rev) {
		this.v = v;
		this.flow = flow;
		this.C = C;
		this.rev = rev;
	}
}

class Graph {
	private int V;
	private int[] level;
	private List<Edge>[] adj;

	public Graph(int V) {
		adj = new ArrayList[V];
		for (int i = 0; i < V; i++) {
			adj[i] = new ArrayList<Edge>();
		}
		this.V = V;
		level = new int[V];
	}

	public void addEdge(int u, int v, long C) {

		Edge a = new Edge(v, 0, C, adj[v].size());

		Edge b = new Edge(u, 0, 0, adj[u].size());

		adj[u].add(a);
		adj[v].add(b);
	}

	public boolean BFS(int s, int t) {
		for (int i = 0; i < V; i++) {
			level[i] = -1;
		}

		level[s] = 0;

		LinkedList<Integer> q = new LinkedList<Integer>();
		q.add(s);

		ListIterator<Edge> i;
		while (q.size() != 0) {
			int u = q.poll();

			for (i = adj[u].listIterator(); i.hasNext();) {
				Edge e = i.next();
				if (level[e.v] < 0 && e.flow < e.C) {

					level[e.v] = level[u] + 1;
					q.add(e.v);
				}
			}
		}

		return level[t] < 0 ? false : true;
	}

	public long sendFlow(int u, long flow, int t, int start[]) {

		if (u == t) {
			return flow;
		}

		for (; start[u] < adj[u].size(); start[u]++) {

			Edge e = adj[u].get(start[u]);

			if (level[e.v] == level[u] + 1 && e.flow < e.C) {
				long curr_flow = Math.min(flow, e.C - e.flow);

				long temp_flow = sendFlow(e.v, curr_flow, t, start);

				if (temp_flow > 0) {
					e.flow += temp_flow;

					adj[e.v].get(e.rev).flow -= temp_flow;
					return temp_flow;
				}
			}
		}

		return 0;
	}

	public long DinicMaxflow(int s, int t) {
		if (s == t) {
			return -1;
		}

		long total = 0;

		while (BFS(s, t) == true) {

			int[] start = new int[V + 1];

			while (true) {
				long flow = sendFlow(s, Integer.MAX_VALUE, t, start);
				if (flow == 0) {
					break;
				}

				total += flow;
			}
		}

		return total;
	}
}
