/*
* Autor: pgms1103-afk
* Problema: Shortest Routes I
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1671/
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.PriorityQueue;

public class ShortestRoutesI {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static long[] tableroConDistancias;
	static ArrayList<Conexion> vuelosConectados[];
	static PriorityQueue<Conexion> colaAexplorar;
	static boolean visitados[];

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		int numeroCiudades = Integer.parseInt(datos[0]);
		int coneccionesDeVuelo = Integer.parseInt(datos[1]);
		vuelosConectados = new ArrayList[numeroCiudades + 1];
		tableroConDistancias = new long[numeroCiudades + 1];
		colaAexplorar = new PriorityQueue<>();
		visitados = new boolean[numeroCiudades + 1];

		for (int i = 0; i <= numeroCiudades; i++) {
			vuelosConectados[i] = new ArrayList<>();
		}

		for (int i = 0; i < coneccionesDeVuelo; i++) {
			String datos1[] = br.readLine().split(" ");
			int a = Integer.parseInt(datos1[0]);
			int b = Integer.parseInt(datos1[1]);
			long peso = Long.parseLong(datos1[2]);

			vuelosConectados[a].add(new Conexion(b, peso));
		}

		for (int i = 2; i <= numeroCiudades; i++) {
			tableroConDistancias[i] = Long.MAX_VALUE;
		}

		bfsDijkstra(1);
		StringBuilder sb = new StringBuilder();
		for (int i = 1; i < tableroConDistancias.length; i++) {
			sb.append(tableroConDistancias[i]+ " ");
		}
		System.out.println(sb);
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
			if (costo < other.costo) {
				return -1;
			}
			if (this.costo > other.costo) {
				return 1;
			} else {
				return 0;
			}

		}
	}

	static void bfsDijkstra(int inicio) {
		colaAexplorar.add(new Conexion(inicio, 0));

		while (!colaAexplorar.isEmpty()) {
			Conexion datosTemporales = colaAexplorar.poll();
			int nodoActual = datosTemporales.nodoDestino;
			long costoActual = datosTemporales.costo;
			
			if (visitados[nodoActual]) {
				continue;
			} else {
				visitados[nodoActual] = true;
			}
			for (Conexion vecino : vuelosConectados[datosTemporales.nodoDestino]) {
				if(vecino.costo + costoActual < tableroConDistancias[vecino.nodoDestino]) {
					tableroConDistancias[vecino.nodoDestino] = costoActual + vecino.costo;
					colaAexplorar.add(new Conexion(vecino.nodoDestino, tableroConDistancias[vecino.nodoDestino]));
				}
			}

		}
	}

}
