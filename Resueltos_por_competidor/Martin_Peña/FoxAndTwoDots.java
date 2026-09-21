import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class FoxAndTwoDots {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static char matriz[][];
	static boolean visitados[][];
	static int dx[] = { 1, -1, 0, 0 };
	static int dy[] = { 0, 0, 1, -1 };
	static int padres[][];
	static int fila;
	static int columna;
	static boolean sePuede;

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		fila = Integer.parseInt(datos[0]);
		columna = Integer.parseInt(datos[1]);
		matriz = new char[fila][columna];
		visitados = new boolean[fila][columna];
		padres = new int[fila][columna];
		sePuede = false;

		for (int filas = 0; filas < fila; filas++) {
			String caracter = br.readLine();
			for (int columnas = 0; columnas < columna; columnas++) {
				matriz[filas][columnas] = caracter.charAt(columnas);
			}
		}

		for (int filas = 0; filas < fila; filas++) {
			for (int columnas = 0; columnas < columna; columnas++) {
				if (sePuede) {
					System.out.println("Yes");
					return;
				} else {
					if (!visitados[filas][columnas]) {
						dfs(filas, columnas, -1, -1);

					}
				}

			}
		}

		if (!sePuede)
			System.out.println("No");

	}

	static void dfs(int primeraFila, int primeraColumna, int filaPadre, int columnaPadre) {
		if (sePuede) {
			return;
		}
		visitados[primeraFila][primeraColumna] = true;
		int filaActual = primeraFila;
		int columnaActual = primeraColumna;

		for (int i = 0; i < 4; i++) {
			int filaVecina = filaActual + dx[i];
			int columnaVecina = columnaActual + dy[i];

			if ((filaVecina >= 0 && filaVecina < fila) && (columnaVecina >= 0 && columnaVecina < columna)
					&& !visitados[filaVecina][columnaVecina]
					&& matriz[filaVecina][columnaVecina] == matriz[filaActual][columnaActual]) {
				dfs(filaVecina, columnaVecina, filaActual, columnaActual);
			} else if ((filaVecina >= 0 && filaVecina < fila) && (columnaVecina >= 0 && columnaVecina < columna)
					&& visitados[filaVecina][columnaVecina]
					&& matriz[filaVecina][columnaVecina] == matriz[filaActual][columnaActual]) {
				if (filaVecina != filaPadre && columnaVecina != columnaPadre) {
					sePuede = true;
					return;
				}
			}
		}
	}

}
