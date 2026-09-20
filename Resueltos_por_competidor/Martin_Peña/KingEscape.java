/*
* Autor: pgms1103-afk
* Problema: A. King Escape
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1033/A
* Difficulty: 1000
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;

public class KingEscape {

	static BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
	static char tablero[][];
	static int dx[] = {1,-1,0,0,-1,1,1,-1};
	static int dy[] = {0,0,1,-1,1,1,-1,-1};
	static boolean ataquePorReina[][];
	static int dimension;
	static boolean visitadoPorRey[][];
	static int filaObjetivo;
	static int columnaObjetivo;
	static boolean sePuede; 
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		dimension = Integer.parseInt(br.readLine());
		tablero = new char[dimension][dimension];
		ataquePorReina = new boolean[dimension][dimension];
		visitadoPorRey = new boolean[dimension][dimension];
		sePuede = false;
		
		String coordenadasReina[] = br.readLine().split(" ");
		int filaReina = Integer.parseInt(coordenadasReina[0])-1;
		int columnaReina = Integer.parseInt(coordenadasReina[1])-1;
		
		String coordenadasRey[] = br.readLine().split(" ");
		int filaRey = Integer.parseInt(coordenadasRey[0])-1;
		int columnaRey = Integer.parseInt(coordenadasRey[1])-1;
		
		String coordenadasObjetivo[] = br.readLine().split(" ");
		filaObjetivo = Integer.parseInt(coordenadasObjetivo[0])-1;
		columnaObjetivo = Integer.parseInt(coordenadasObjetivo[1])-1;
		
		bfsReina(filaReina, columnaReina);
		bfsRey(filaRey, columnaRey);
		
		if(sePuede) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
//		for (int i = 0; i < dimension; i++) {
//			for (int j = 0; j < dimension; j++) {
//				if(ataquePorReina[i][j]) {
//					System.out.print("T");
//				}else {
//					System.out.print("f");
//				}
//				
//			}
//			System.out.println();
//		}
		
		
	}
	
	static void bfsReina(int fila, int columna) {
		ArrayDeque<Integer> colaFila = new ArrayDeque<>();
		ArrayDeque<Integer> colaColumna = new ArrayDeque<>();
		colaFila.add(fila);
		colaColumna.add(columna);
		ataquePorReina[fila][columna] = true;
		
		while(!colaFila.isEmpty()) {
			int filaActual = colaFila.poll();
			int columnaActual = colaColumna.poll();
			for (int i = 0; i < 8; i++) {
				int filaVecino = filaActual+dx[i];
				int columnaVecino = columnaActual+dy[i];
				while((filaVecino >= 0 && filaVecino < dimension) && (columnaVecino >= 0 && columnaVecino < dimension)) {
					ataquePorReina[filaVecino][columnaVecino] = true;
					filaVecino = filaVecino + dx[i];
					columnaVecino = columnaVecino + dy[i];
				}
			}
			
		}
		
	}
	
	static void bfsRey(int fila, int columna) {
		ArrayDeque<Integer> colaFila = new ArrayDeque<>();
		ArrayDeque<Integer> colaColumna = new ArrayDeque<>();
		colaFila.add(fila);
		colaColumna.add(columna);
		visitadoPorRey[fila][columna] = true;
		
		while(!colaFila.isEmpty()) {
			int filaActual = colaFila.poll();
			int columnaActual = colaColumna.poll();
			for (int i = 0; i < 8; i++) {
				int filaVecino = filaActual+dx[i];
				int columnaVecino = columnaActual+dy[i];
				if((filaVecino >= 0 && filaVecino < dimension) && (columnaVecino >= 0 && columnaVecino < dimension)
						&& !ataquePorReina[filaVecino][columnaVecino] 
								&& !visitadoPorRey[filaVecino][columnaVecino]) {
					visitadoPorRey[filaVecino][columnaVecino] = true;
					if(filaVecino == filaObjetivo && columnaVecino == columnaObjetivo) {
						sePuede = true;
						return;
					}
					colaFila.add(filaVecino);
					colaColumna.add(columnaVecino);
				}
			}
		}
	}

}
