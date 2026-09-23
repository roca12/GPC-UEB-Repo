/*
* Autor: pgms1103-afk
* Problema: C. Dijkstra?
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/20/C
* Difficulty: 1900
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.PriorityQueue;

public class Dijkstra {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static ArrayList<Conexion>[] grafo;
	static long[] distancias;
	static boolean[] visitados;
	static long[] camino;
	static PriorityQueue<Conexion> filaPrioridad = new PriorityQueue<>();

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		int numeroVertices = Integer.parseInt(datos[0]);
		int numeroConecciones = Integer.parseInt(datos[1]);
		distancias = new long[numeroVertices + 1];
		camino = new long[numeroVertices + 1];
		visitados = new boolean[numeroVertices + 1];
		grafo = new ArrayList[numeroVertices + 1];

		for (int i = 0; i <= numeroVertices; i++) {
			grafo[i] = new ArrayList<>();
		}

		for (int i = 0; i < numeroConecciones; i++) {
			String datos1[] = br.readLine().split(" ");
			int a = Integer.parseInt(datos1[0]);
			int b = Integer.parseInt(datos1[1]);
			long peso = Long.parseLong(datos1[2]);

			grafo[a].add(new Conexion(b, peso));
			grafo[b].add(new Conexion(a, peso));

		}

		Arrays.fill(distancias, Long.MAX_VALUE);
		distancias[1] = 0;

		bfsDijkstra(1);

		if (camino[numeroVertices] == 0) {
			System.out.println(-1);
			return;
		} else {
			ArrayList<Long> resultado = new ArrayList<>();

			for (long curr = numeroVertices; curr != 1; curr = camino[(int) curr]) {
				resultado.add(curr);
			}
			StringBuilder sb = new StringBuilder();
			sb.append(1 + " ");
			for (int i = resultado.size() - 1; i >= 1; i--) {
				sb.append(resultado.get(i) + " ");
			}
			sb.append(numeroVertices);

			System.out.println(sb);
		}
	}

	static void bfsDijkstra(int inicio) {
		filaPrioridad.add(new Conexion(inicio, 0));

		while (!filaPrioridad.isEmpty()) {
			Conexion datosActuales = filaPrioridad.poll();
			int nodoActual = datosActuales.nodoDestino;
			long costoActual = datosActuales.costo;

			if (visitados[nodoActual]) {
				continue;
			} else {
				visitados[nodoActual] = true;
			}
			for (Conexion vecino : grafo[nodoActual]) {
				if (vecino.costo + costoActual < distancias[vecino.nodoDestino]) {
					distancias[vecino.nodoDestino] = vecino.costo + costoActual;
					camino[vecino.nodoDestino] = nodoActual;
					filaPrioridad.add(new Conexion(vecino.nodoDestino, distancias[vecino.nodoDestino]));
				}
			}
		}

	}

	static class Conexion implements Comparable<Conexion> {

		int nodoDestino;
		long costo;

		public Conexion(int nodoDestino, long costo) {
			this.nodoDestino = nodoDestino;
			this.costo = costo;
		}

		@Override
		public int compareTo(Conexion other) {
			return Long.compare(this.costo, other.costo);
		}
	}

}
