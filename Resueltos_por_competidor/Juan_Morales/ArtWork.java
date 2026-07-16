/*
 * Autor: OtherSpanish
 * Problema: Art Work
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/102346/problem/A
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	// Nodo que representa coords (x,y) y r de un circulo
	static class Node {
		long x, y, s;

		public Node(long x, long y, long s) {
			this.x = x;
			this.y = y;
			this.s = s;

		}
	}

	static int[] parent;

	// Metodos clasicos de UnionFind
	static int find(int x) {
		while (parent[x] != x) {
			parent[x] = parent[parent[x]];
			x = parent[x];
		}
		return x;
	}

	static void union(int x, int y) {
		parent[find(x)] = find(y);
	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		long m = Long.parseLong(st.nextToken()), n = Long.parseLong(st.nextToken());
		int k = Integer.parseInt(st.nextToken());
		// Arreglo que almacena sensores
		Node[] sens = new Node[k];

		for (int i = 0; i < k; i++) {
			st = new StringTokenizer(br.readLine());
			sens[i] = new Node(Long.parseLong(st.nextToken()), Long.parseLong(st.nextToken()),
					Long.parseLong(st.nextToken()));
		}



		// Supernodos representando los limites del GRID
		int A = k, B = k + 1;
		// Añade 2 espacios para los supernodos
		parent = new int[k + 2];
		// Init de parents
		for (int i = 0; i < k + 2; i++)
			parent[i] = i;

		for (int i = 0; i < k; i++) {
			Node sensor = sens[i];
			/*
			 * Formulas: (y+r)>=y_grid (x-r)<=0 (x+r)>=x_grid (y-r)<=0
			 * 
			 */
			if (sensor.y + sensor.s >= n || sensor.x - sensor.s <= 0)
				union(i, A);
			if (sensor.y - sensor.s <= 0 || sensor.x + sensor.s >= m)
				union(i, B);
		}

		for (int i = 0; i < k; i++) {
			for (int j = 0; j < k; j++) {
				Node sensor1 = sens[i], sensor2 = sens[j];
				long dx = sensor1.x - sensor2.x;
				long dy = sensor1.y - sensor2.y;
				long suma = sensor1.s + sensor2.s;

				// distancia^2 <= (S1+S2)^2
				if (dx * dx + dy * dy <= suma * suma)
					union(i, j);

			}
		}

		System.out.println((find(A) == find(B)) ? "N" : "S");
	}
}
