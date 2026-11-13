/*
 * Autor: OtherSpanish
 * Problema: Dominoes
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/267/problem/B
 */


import java.io.*;
import java.util.*;

public class Main {

    static final int CANT_NODOS = 7;
    static ArrayList<int[]>[] ady;
    static boolean[] fichUsadas;
    static int[] punteroAdy;

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		StringTokenizer st;

        int n = Integer.parseInt(br.readLine());

        int[] izq = new int[n];
        int[] der = new int[n];
        int[] grado = new int[CANT_NODOS];
        ady = new ArrayList[CANT_NODOS];
        fichUsadas = new boolean[n];
        punteroAdy = new int[CANT_NODOS];
        for (int i = 0; i < CANT_NODOS; ++i) {
            ady[i] = new ArrayList<>();
        }

        for (int i = 0; i < n; ++i) {
            st = new StringTokenizer(br.readLine());
            int nodo1 = Integer.parseInt(st.nextToken());
            int nodo2 = Integer.parseInt(st.nextToken());

            izq[i] = nodo1;
            der[i] = nodo2;
            grado[nodo1]++;
            grado[nodo2]++;

            ady[nodo1].add(new int[]{nodo2, i, 0});
            ady[nodo2].add(new int[]{nodo1, i, 1});
        }

        if (!isSameComponent(grado)) {
            pw.println("No solution");
            pw.flush();
            return;
        }

        int cont = 0;
        int indx = -1;
        for (int i = 0; i < CANT_NODOS; ++i) {
            if (grado[i] % 2 == 1) {
                indx = i;
                cont++;
            }
        }

        if (cont != 0 && cont != 2) {
            pw.println("No solution");
            pw.flush();
            return;
        }

        int nodoInicio;

        if (cont == 2) {
            nodoInicio = indx;
        } else {
            nodoInicio = nodoInicial(grado);
        }

        List<int[]> euler = hierhalzer(nodoInicio);
        if (euler.size() != n) {
            pw.println("No solution");
            pw.flush();
            return;
        }

        StringBuilder sb = new StringBuilder();

        for (int[] paso : euler) {
            int i = paso[0];
            int signo = paso[1];

            sb.append(i + 1).append(signo == 0 ? " +" : " -").append('\n');
        }

        pw.print(sb);
		pw.flush();
	}

    static boolean isSameComponent(int[] grado) {
        int nodoActual = nodoInicial(grado);
        if (nodoActual == -1) {
            return true;
        }

        boolean[] visitado = new boolean[grado.length];
        Deque<Integer> dfs = new ArrayDeque<>();
        dfs.push(nodoActual);
        visitado[nodoActual] = true;

        while (!dfs.isEmpty()) {
            int nodoRevis = dfs.pop();
            for (int[] arista : ady[nodoRevis]) {
                int vecino = arista[0];
                if (!visitado[vecino]) {
                    visitado[vecino] = true;
                    dfs.push(vecino);
                }
            }
        }

        for (int i = 0; i < grado.length; ++i) {
            if (grado[i] > 0 && !visitado[i]) {
                return false;
            }
        }
        return true;
    }

    static int nodoInicial(int[] grado) {
        for (int i = 0; i < grado.length; ++i) {
            if (grado[i] > 0) {
                return i;
            }
        }
        return -1;
    }

    static List<int[]> hierhalzer(int nodoInicio) {
        Deque<Integer> pilaNodos = new ArrayDeque<>();
        Deque<int[]> pilaFichasUsadas = new ArrayDeque<>();
        List<int[]> caminoInvertido = new ArrayList<>();

        pilaNodos.push(nodoInicio);

        while (!pilaNodos.isEmpty()) {
            int nodoActual = pilaNodos.peek();

            int[] siguienteArista = buscarProximaAristaSinUsar(nodoActual);

            if (siguienteArista != null) {
                int nodoDestino = siguienteArista[0];
                int indiceFicha = siguienteArista[1];
                int signo = siguienteArista[2];

                fichUsadas[indiceFicha] = true;

                pilaNodos.push(nodoDestino);
                pilaFichasUsadas.push(new int[]{indiceFicha, signo});
            } else {
                pilaNodos.pop();

                if (!pilaFichasUsadas.isEmpty()) {
                    caminoInvertido.add(pilaFichasUsadas.pop());
                }
            }
        }

        Collections.reverse(caminoInvertido);
        return caminoInvertido;
    }

    static int[] buscarProximaAristaSinUsar(int nodo) {
        List<int[]> aristasNodo = ady[nodo];

        while (punteroAdy[nodo] < aristasNodo.size()) {
            int[] arista = aristasNodo.get(punteroAdy[nodo]);
            punteroAdy[nodo]++;
            int indiceFicha = arista[1];
            if (!fichUsadas[indiceFicha]) {
                return arista;
            }
        }

        return null;
    }
}
