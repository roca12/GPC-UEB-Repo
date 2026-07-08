/*
 * Autor: OtherSpanish
 * Problema: Network Topolofy
 * Juez online: CodeForces
 * Veredicto: Accepted
 * https://codeforces.com/problemset/problem/292/B?locale=en
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Network_Topology {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
		int[] app = new int[n];
		char type = ' ';
		for (int i = 0; i < m; i++) {
			st = new StringTokenizer(br.readLine());
			int node1 = Integer.parseInt(st.nextToken()) - 1, node2 = Integer.parseInt(st.nextToken()) - 1;
			app[node1] += 1;
			app[node2] += 1;
		}

		int[] cant = new int[3];
		for (int i = 0; i < n; i++) {
			if (app[i] == 1)
				cant[0] += 1;
			if (app[i] == 2)
				cant[1] += 1;
			if (app[i] > 2)
				cant[2] += 1;
		}

		if (n == m + 1 && cant[2] == 0) {
			pw.println("bus topology");

		} else if (n == m && cant[0] == 0 && cant[2] == 0) {
			pw.println("ring topology");

		} else if (n == m + 1 && cant[0] > 2 && cant[2] == 1 && cant[1] == 0) {
			pw.println("star topology");
		} else
			pw.println("unknown topology");
		pw.flush();
	}
}
