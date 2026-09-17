
/*
* Autor: pgms1103-afk
* Problema: E. The Lakes
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1829/E
* Difficulty: 1100
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class TheLakes {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static int matriz[][];
	static boolean visitados[][];
	static int dx[] = { 1, -1, 0, 0 };
	static int dy[] = { 0, 0, 1, -1 };
	static int alto;
	static int ancho;
	static int resultado;

	public static void main(String[] args) throws NumberFormatException, IOException {

		int t = Integer.parseInt(br.readLine());
		for (int i = 0; i < t; i++) {

			String datos[] = br.readLine().split(" ");
			alto = Integer.parseInt(datos[0]);
			ancho = Integer.parseInt(datos[1]);
			matriz = new int[alto][ancho];
			visitados = new boolean[alto][ancho];
			resultado = 0;

			for (int filas = 0; filas < alto; filas++) {
				String linea[] = br.readLine().split(" ");
				for (int columnas = 0; columnas < ancho; columnas++) {
					matriz[filas][columnas] = Integer.parseInt(linea[columnas]);
				}
			}
			int mejorLago = 0;

			for (int filas = 0; filas < alto; filas++) {
				for (int columnas = 0; columnas < ancho; columnas++) {
					if (matriz[filas][columnas] != 0 && !visitados[filas][columnas]) {
						mejorLago = bfs(filas, columnas);
						resultado = Math.max(mejorLago, resultado);
					}
				}
			}

			System.out.println(resultado);
		}

	}

	static int bfs(int fila, int columna) {
		int lagoAnalizado = 0;
		lagoAnalizado += matriz[fila][columna];
		ArrayDeque<Integer> colaFila = new ArrayDeque<>();
		ArrayDeque<Integer> colaColumna = new ArrayDeque<>();

		colaFila.add(fila);
		colaColumna.add(columna);

		visitados[fila][columna] = true;

		while (!colaFila.isEmpty()) {
			int filaActual = colaFila.poll();
			int columnaActual = colaColumna.poll();

			for (int i = 0; i < 4; i++) {
				int filaVecino = filaActual + dx[i];
				int columnaVecino = columnaActual + dy[i];

				if (((filaVecino >= 0 && filaVecino < alto) && (columnaVecino >= 0 && columnaVecino < ancho))
						&& (!visitados[filaVecino][columnaVecino]) && (matriz[filaVecino][columnaVecino] != 0)) {
					visitados[filaVecino][columnaVecino] = true;
					colaFila.add(filaVecino);
					colaColumna.add(columnaVecino);
					lagoAnalizado += matriz[filaVecino][columnaVecino];
				}
			}
		}
		return lagoAnalizado;

	}

}
