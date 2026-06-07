import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.StringTokenizer;
/*
 * Autor: Tomás Triana Galvis
 * Problema: Sheba's Amoebas
 * Juez online: Kattisamoebas
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/amoebas
 **/ 
public class Main {

	static int cont;
	static ArrayList<ArrayList<Integer>> listaAdjacencia;
	static boolean[] visitado;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String linea = br.readLine();
		StringTokenizer st = new StringTokenizer(linea);
		int row = Integer.parseInt(st.nextToken());
		int col = Integer.parseInt(st.nextToken());
		ArrayList<String> lineas = new ArrayList<String>();
		listaAdjacencia = new ArrayList<ArrayList<Integer>>();
		for (int i = 0; i < row * col; i++) {
			listaAdjacencia.add(new ArrayList<Integer>());
		}
		visitado = new boolean[listaAdjacencia.size()];
		for (int i = 0; i < row; i++) {
			lineas.add(br.readLine());
		}
		char N, S, E, O, SE, SO, NE, NO;
		int nodoA;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				nodoA = (i * col) + (j);
				if (lineas.get(i).charAt(j) == '.') {
					continue;
				}
				if (i == 0 && j == 0) {
					E = lineas.get(i).charAt(j + 1);
					S = lineas.get(i + 1).charAt(j);
					SE = lineas.get(i + 1).charAt(j + 1);
					if (E == '#') {
						listaAdjacencia.get(nodoA).add((i * col) + (j + 1));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
					if (SE == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j + 1));
					}

				} else if (i == 0 && j == col - 1) {
					O = lineas.get(i).charAt(j - 1);
					SO = lineas.get(i + 1).charAt(j - 1);
					S = lineas.get(i + 1).charAt(j);
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}
					if (SO == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j - 1));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
				} else if (i == row - 1 && j == 0) {
					N = lineas.get(i - 1).charAt(j);
					NE = lineas.get(i - 1).charAt(j + 1);
					E = lineas.get(i).charAt(j + 1);
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (NE == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j + 1));
					}
					if (E == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j + 1));
					}
				} else if (i == row - 1 && j == col - 1) {
					N = lineas.get(i - 1).charAt(j);
					NO = lineas.get(i - 1).charAt(j - 1);
					O = lineas.get(i).charAt(j - 1);
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (NO == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j - 1));
					}
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}
				} else if (i == 0 && j > 0) {
					E = lineas.get(i).charAt(j + 1);
					O = lineas.get(i).charAt(j - 1);
					SO = lineas.get(i + 1).charAt(j - 1);
					S = lineas.get(i + 1).charAt(j);
					SE = lineas.get(i + 1).charAt(j + 1);
					if (E == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j + 1));
					}
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}
					if (SO == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j - 1));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
					if (SE == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j + 1));
					}
				} else if (i > 0 && j == 0) {
					E = lineas.get(i).charAt(j + 1);
					N = lineas.get(i - 1).charAt(j);
					NE = lineas.get(i - 1).charAt(j + 1);
					S = lineas.get(i + 1).charAt(j);
					SE = lineas.get(i + 1).charAt(j + 1);
					if (E == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j + 1));
					}
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (NE == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j + 1));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
					if (SE == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j + 1));
					}
				} else if (i == row - 1 && j > 0) {
					E = lineas.get(i).charAt(j + 1);
					N = lineas.get(i - 1).charAt(j);
					NE = lineas.get(i - 1).charAt(j + 1);
					NO = lineas.get(i - 1).charAt(j - 1);
					O = lineas.get(i).charAt(j - 1);
					if (E == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j + 1));
					}
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (NE == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j + 1));
					}
					if (NO == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j - 1));
					}
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}
				} else if (i > 0 && j == col - 1) {
					SO = lineas.get(i + 1).charAt(j - 1);
					N = lineas.get(i - 1).charAt(j);
					S = lineas.get(i + 1).charAt(j);
					NO = lineas.get(i - 1).charAt(j - 1);
					O = lineas.get(i).charAt(j - 1);
					if (SO == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j - 1));
					}
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
					if (NO == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j - 1));
					}
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}

				} else {
					SO = lineas.get(i + 1).charAt(j - 1);
					N = lineas.get(i - 1).charAt(j);
					S = lineas.get(i + 1).charAt(j);
					NO = lineas.get(i - 1).charAt(j - 1);
					O = lineas.get(i).charAt(j - 1);
					E = lineas.get(i).charAt(j + 1);
					NE = lineas.get(i - 1).charAt(j + 1);
					SE = lineas.get(i + 1).charAt(j + 1);
					if (SO == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j - 1));
					}
					if (N == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j));
					}
					if (S == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j));
					}
					if (NO == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j - 1));
					}
					if (O == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j - 1));
					}
					if (E == '#') {
						listaAdjacencia.get(nodoA).add(((i) * col) + (j + 1));
					}
					if (NE == '#') {
						listaAdjacencia.get(nodoA).add(((i - 1) * col) + (j + 1));
					}
					if (SE == '#') {
						listaAdjacencia.get(nodoA).add(((i + 1) * col) + (j + 1));
					}
				}
			}
		}

		for (int k = 0; k < visitado.length; k++) {
			if (!visitado[k] && !listaAdjacencia.get(k).isEmpty()) {
				cont++;
				dfs(k);

			}
		}
		System.out.println(cont);

	}

	static void dfs(int nodoOrigen) {

		visitado[nodoOrigen] = true;

		for (Integer vecino : listaAdjacencia.get(nodoOrigen)) {
			if (!visitado[vecino]) {
				dfs(vecino);

			}
		}

	}

}
