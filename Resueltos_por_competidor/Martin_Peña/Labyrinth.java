/*
* Autor: pgms1103-afk
* Problema: Labyrinth
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1193/
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class Labyrinth {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static int dx[] = { 0, 0, 1, -1 };
	static int dy[] = { 1, -1, 0, 0 };
	static boolean visitados[][];
	static int alto;
	static int ancho;
	static char matriz[][];
	static char camino[][];
	static boolean encontrado;

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		alto = Integer.parseInt(datos[0]);
		ancho = Integer.parseInt(datos[1]);
		matriz = new char[alto][ancho];
		visitados = new boolean[alto + 1][ancho + 1];
		encontrado = false;
		camino = new char[alto + 1][ancho + 1];
		int filaB = 0;
		int columnaB = 0;
		int filaA = 0;
		int columnaA = 0;

		for (int fila = 0; fila < alto; fila++) {
			String linea = br.readLine();
			for (int columna = 0; columna < ancho; columna++) {
				matriz[fila][columna] = linea.charAt(columna);
				if (matriz[fila][columna] == 'B') {
					filaB = fila;
					columnaB = columna;
				} else if (matriz[fila][columna] == 'A') {
					filaA = fila;
					columnaA = columna;
				}
			}
		}

		for (int fila = 0; fila < alto; fila++) {
			for (int columna = 0; columna < ancho; columna++) {
				if (matriz[fila][columna] == 'A') {
					bfs(fila, columna);
					if (encontrado) {
						System.out.println("YES");
						StringBuilder ruta = new StringBuilder();
						int f = filaB;
						int c = columnaB;

						while (f != filaA || c != columnaA) {
							char movimiento = camino[f][c];
							ruta.append(movimiento);

							if (movimiento == 'D')
								f--;
							if (movimiento == 'U')
								f++;
							if (movimiento == 'L')
								c++;
							if (movimiento == 'R')
								c--;
						}
						ruta.reverse();
						System.out.println(ruta.length());
						System.out.println(ruta.toString());

					} else {
						System.out.println("NO");
					}
				}
			}
		}
	}

	static void bfs(int fila, int columna) {
		ArrayDeque<Integer> coFila = new ArrayDeque<>();
		ArrayDeque<Integer> coColumna = new ArrayDeque<>();
		coFila.add(fila);
		coColumna.add(columna);
		visitados[fila][columna] = true;

		while (!coFila.isEmpty()) {
			int filaActual = coFila.poll();
			int columnaActual = coColumna.poll();

			if (matriz[filaActual][columnaActual] == 'B') {
				encontrado = true;
				break;
			}
			// Derecha
			if (((filaActual + dx[0] >= 0) && filaActual + dx[0] < alto)
					&& ((columnaActual + dy[0] >= 0) && columnaActual + dy[0] < ancho)
					&& (matriz[filaActual + dx[0]][columnaActual + dy[0]] != '#')) {
				if (!visitados[filaActual + dx[0]][columnaActual + dy[0]]) {
					visitados[filaActual + dx[0]][columnaActual + dy[0]] = true;
					camino[filaActual + dx[0]][columnaActual + dy[0]] = 'R';
					coFila.add(filaActual + dx[0]);
					coColumna.add(columnaActual + dy[0]);
				}

			}
			// Izquierda
			if (((filaActual + dx[1] >= 0) && filaActual + dx[1] < alto)
					&& ((columnaActual + dy[1] >= 0) && columnaActual + dy[1] < ancho)
					&& (matriz[filaActual + dx[1]][columnaActual + dy[1]] != '#')) {
				if (!visitados[filaActual + dx[1]][columnaActual + dy[1]]) {
					visitados[filaActual + dx[1]][columnaActual + dy[1]] = true;
					camino[filaActual + dx[1]][columnaActual + dy[1]] = 'L';
					coFila.add(filaActual + dx[1]);
					coColumna.add(columnaActual + dy[1]);
				}

			}
			// Abajo
			if (((filaActual + dx[2] >= 0) && filaActual + dx[2] < alto)
					&& ((columnaActual + dy[2] >= 0) && columnaActual + dy[2] < ancho)
					&& (matriz[filaActual + dx[2]][columnaActual + dy[2]] != '#')) {
				if (!visitados[filaActual + dx[2]][columnaActual + dy[2]]) {
					visitados[filaActual + dx[2]][columnaActual + dy[2]] = true;
					camino[filaActual + dx[2]][columnaActual + dy[2]] = 'D';
					coFila.add(filaActual + dx[2]);
					coColumna.add(columnaActual + dy[2]);
				}

			}
			// Arriba
			if (((filaActual + dx[3] >= 0) && filaActual + dx[3] < alto)
					&& ((columnaActual + dy[3] >= 0) && columnaActual + dy[3] < ancho)
					&& (matriz[filaActual + dx[3]][columnaActual + dy[3]] != '#')) {
				if (!visitados[filaActual + dx[3]][columnaActual + dy[3]]) {
					visitados[filaActual + dx[3]][columnaActual + dy[3]] = true;
					camino[filaActual + dx[3]][columnaActual + dy[3]] = 'U';
					coFila.add(filaActual + dx[3]);
					coColumna.add(columnaActual + dy[3]);
				}

			}

		}

	}

}