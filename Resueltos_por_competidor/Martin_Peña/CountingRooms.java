/*
* Autor: pgms1103-afk
* Problema: Counting Rooms
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1192
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class CountingRooms {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static boolean visitados[][];
	static String matriz[][];
	static int dx[] = { 0, 0, 1, -1 };
	static int dy[] = { 1, -1, 0, 0 };
	static int alto;
	static int ancho;

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		alto = Integer.parseInt(datos[0]);
		ancho = Integer.parseInt(datos[1]);
		matriz = new String[alto][ancho];
		visitados = new boolean[alto + 1][ancho + 1];

		for (int filas = 0; filas < alto; filas++) {
			String linea = br.readLine();
			for (int columnas = 0; columnas < ancho; columnas++) {
				matriz[filas][columnas] = String.valueOf(linea.charAt(columnas));
			}
		}
		
		int contador = 0;
		for (int filas = 0; filas < alto; filas++) {
			for (int columnas = 0; columnas < ancho; columnas++) {
				if (matriz[filas][columnas].equals(".") && !visitados[filas][columnas]) {
					contador++;
					bfs(filas, columnas);

				}
			}
		}

		System.out.println(contador);

	}

	static void bfs(int fila, int columna) {
		ArrayDeque<Integer> colaFila = new ArrayDeque<>();
		ArrayDeque<Integer> colaColumna = new ArrayDeque<>();

		colaFila.add(fila);
		colaColumna.add(columna);

		visitados[fila][columna] = true;

		while (!colaFila.isEmpty()) {
			int filaActual = colaFila.poll();
			int columnaActual = colaColumna.poll();

			// Derecha
			if (((filaActual + dx[0] >= 0 && filaActual + dx[0] < alto)
					&& (columnaActual + dy[0] >= 0 && columnaActual + dy[0] < ancho))
					&& matriz[filaActual + dx[0]][columnaActual + dy[0]].equals(".")) {
				if (!visitados[filaActual + dx[0]][columnaActual + dy[0]]) {
					visitados[filaActual + dx[0]][columnaActual + dy[0]] = true;
					colaFila.add(filaActual + dx[0]);
					colaColumna.add(columnaActual + dy[0]);
				}
			}
			// Izquierda
			if (((filaActual + dx[1] >= 0 && filaActual + dx[1] < alto)
					&& (columnaActual + dy[1] >= 0 && columnaActual + dy[1] < ancho))
					&& matriz[filaActual + dx[1]][columnaActual + dy[1]].equals(".")) {
				if (!visitados[filaActual + dx[1]][columnaActual + dy[1]]) {
					visitados[filaActual + dx[1]][columnaActual + dy[1]] = true;
					colaFila.add(filaActual + dx[1]);
					colaColumna.add(columnaActual + dy[1]);
				}
			}
			// Abajo
			if (((filaActual + dx[2] >= 0 && filaActual + dx[2] < alto)
					&& (columnaActual + dy[2] >= 0 && columnaActual + dy[2] < ancho))
					&& matriz[filaActual + dx[2]][columnaActual + dy[2]].equals(".")) {
				if (!visitados[filaActual + dx[2]][columnaActual + dy[2]]) {
					visitados[filaActual + dx[2]][columnaActual + dy[2]] = true;
					colaFila.add(filaActual + dx[2]);
					colaColumna.add(columnaActual + dy[2]);
				}
			}
			// Arriba
			if (((filaActual + dx[3] >= 0 && filaActual + dx[3] < alto)
					&& (columnaActual + dy[3] >= 0 && columnaActual + dy[3] < ancho))
					&& matriz[filaActual + dx[3]][columnaActual + dy[3]].equals(".")) {
				if (!visitados[filaActual + dx[3]][columnaActual + dy[3]]) {
					visitados[filaActual + dx[3]][columnaActual + dy[3]] = true;
					colaFila.add(filaActual + dx[3]);
					colaColumna.add(columnaActual + dy[3]);
				}
			}
		}

	}
}