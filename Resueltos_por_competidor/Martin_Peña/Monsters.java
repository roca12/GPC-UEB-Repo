
/*
* Autor: pgms1103-afk
* Problema: Monsters
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1194
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class Monsters {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static char matriz[][];
	static boolean visitados[][];
	static int dx[] = { 1, -1, 0, 0 };
	static int dy[] = { 0, 0, 1, -1 };
	static int alto;
	static int ancho;
	static boolean sePuede = false;
	static char camino[][];
	static int tiempoMonstruos[][];
	static int tiempoHumano[][];
	static boolean montruosVisitados[][];
	static ArrayDeque<Integer> colaFilas = new ArrayDeque<>();
	static ArrayDeque<Integer> colaColumnas = new ArrayDeque<>();
	static int filaFinal;
	static int columnaFinal;

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		alto = Integer.parseInt(datos[0]);
		ancho = Integer.parseInt(datos[1]);
		matriz = new char[alto][ancho];
		tiempoMonstruos = new int[alto][ancho];
		montruosVisitados = new boolean[alto][ancho];
		visitados = new boolean[alto][ancho];
		tiempoHumano = new int[alto][ancho];
		camino = new char[alto][ancho];
		int filaA = 0;
		int columnaA = 0;

		for (int fila = 0; fila < alto; fila++) {
			for (int columna = 0; columna < ancho; columna++) {
				tiempoMonstruos[fila][columna] = Integer.MAX_VALUE;
			}
		}

		for (int fila = 0; fila < alto; fila++) {
			String linea = br.readLine();
			for (int columna = 0; columna < ancho; columna++) {
				matriz[fila][columna] = linea.charAt(columna);
				if (matriz[fila][columna] == 'M') {
					colaFilas.add(fila);
					colaColumnas.add(columna);
					tiempoMonstruos[fila][columna] = 0;
					montruosVisitados[fila][columna] = true;
				} else if (matriz[fila][columna] == 'A') {
					filaA = fila;
					columnaA = columna;
				}
			}
		}

		if (filaA == 0 || filaA == alto - 1 || columnaA == 0 || columnaA == ancho - 1) {
			System.out.println("YES");
			System.out.println(0);
			return;
		}

		bfsMonstros();
		bfsHumano(filaA, columnaA);

		if (sePuede) {
			System.out.println("YES");
			StringBuilder caminoFinal = new StringBuilder();
			int fila = filaFinal;
			int columna = columnaFinal;
			while (fila != filaA || columna != columnaA) {
				caminoFinal.append(camino[fila][columna]);
				if (camino[fila][columna] == 'D') {
					fila = fila - 1;
				} else if (camino[fila][columna] == 'U') {
					fila = fila + 1;
				} else if (camino[fila][columna] == 'R') {
					columna = columna - 1;
				} else if (camino[fila][columna] == 'L') {
					columna = columna + 1;
				}
			}
			System.out.println(caminoFinal.length());
			System.out.println(caminoFinal.reverse());
		} else {
			System.out.println("NO");
		}

	}

	static void bfsHumano(int fila, int columna) {
		ArrayDeque<Integer> colaFilas = new ArrayDeque<>();
		ArrayDeque<Integer> colaColumnas = new ArrayDeque<>();
		colaFilas.add(fila);
		colaColumnas.add(columna);
		visitados[fila][columna] = true;

		while (!colaFilas.isEmpty()) {
			int filaActual = colaFilas.poll();
			int columnaActual = colaColumnas.poll();

			for (int i = 0; i < 4; i++) {
				int filaVecino = filaActual + dx[i];
				int columnaVecino = columnaActual + dy[i];

				if (((filaVecino >= 0) && (filaVecino < alto)) && ((columnaVecino >= 0) && columnaVecino < ancho)
						&& !visitados[filaVecino][columnaVecino] && matriz[filaVecino][columnaVecino] != '#') {

					if (tiempoHumano[filaActual][columnaActual] + 1 < tiempoMonstruos[filaVecino][columnaVecino]) {
						tiempoHumano[filaVecino][columnaVecino] = tiempoHumano[filaActual][columnaActual] + 1;
						visitados[filaVecino][columnaVecino] = true;
						colaFilas.add(filaVecino);
						colaColumnas.add(columnaVecino);
						if (i == 0) {
							camino[filaVecino][columnaVecino] = 'D';
						} else if (i == 1) {
							camino[filaVecino][columnaVecino] = 'U';
						} else if (i == 2) {
							camino[filaVecino][columnaVecino] = 'R';
						} else if (i == 3) {
							camino[filaVecino][columnaVecino] = 'L';
						}
						if (filaVecino == 0 || filaVecino == alto - 1 || columnaVecino == 0
								|| columnaVecino == ancho - 1) {
							sePuede = true;
							filaFinal = filaVecino;
							columnaFinal = columnaVecino;
							return;
						}
					}

				}
			}
		}

	}

	static void bfsMonstros() {
		while (!colaFilas.isEmpty()) {
			int filaActual = colaFilas.poll();
			int columnaActual = colaColumnas.poll();

			for (int i = 0; i < 4; i++) {
				int filaVecino = filaActual + dx[i];
				int columnaVecino = columnaActual + dy[i];

				if (((filaVecino >= 0) && (filaVecino < alto)) && ((columnaVecino >= 0) && columnaVecino < ancho)
						&& !montruosVisitados[filaVecino][columnaVecino] && matriz[filaVecino][columnaVecino] != '#') {

					montruosVisitados[filaVecino][columnaVecino] = true;
					tiempoMonstruos[filaVecino][columnaVecino] = tiempoMonstruos[filaActual][columnaActual] + 1;
					colaFilas.add(filaVecino);
					colaColumnas.add(columnaVecino);
				}
			}
		}

	}

}