/*
 * Autor: OtherSpanish
 * Problema: Critical Links
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=737#google_vignette
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.StringTokenizer;
import java.util.ArrayDeque;
import java.util.Collections;
import java.util.Comparator;

//Algoritmo de Tarjan 
public class Main {
	// Lista de adjacencia con arreglo para identificar el {int nodo, int
	// identificadorDeArista (se explica a profundidad en el método addNode)} (
	static ArrayList<List<int[]>> adj = new ArrayList<List<int[]>>();
	static boolean[] visited;
	/*
	 * Arreglos preOrd = Indices del recorrido PreOrder para el DFS spanning tree
	 * que representa al grafo.
	 * 
	 * low = Representa el nodo más alto que se puede alcanzar desde cada Indice
	 * (nodo)
	 * 
	 * parentEdge = Representa el pariente directo en el Árbol (arista)
	 */
	static int[] preOrd, low;
	static int[] parentEdge;

	/**
	 * Método para inicializar arreglos, listas, etc
	 * 
	 * @param size Representa la cantidad de nodos que van a haber en el programa.
	 */
	static void init(int size) {
		adj = new ArrayList<List<int[]>>(); // Inicializar la lista de adyacencia

		// Inicializar arreglos
		visited = new boolean[size];
		preOrd = new int[size];
		low = new int[size];
		parentEdge = new int[size];

		/*
		 * Por cada nodo quieres: Definir los padres de cada nodo como -1, indicando que
		 * aún no se encuentra un pariente (porque no hemos hecho el recorrido)
		 * 
		 * Marcar todos los nodos como no visitados.
		 * 
		 * Definir a la lista de adyacencia un espacio en memoria que va a esperar los
		 * nodos en formato {int nodo, int identificadorDeArista}
		 */

		for (int i = 0; i < size; i++) {
			parentEdge[i] = -1;
			visited[i] = false;
			adj.add(new ArrayList<int[]>());

		}
	}

	// Contador de cuantas aristas se han ingresado en el programa, util para
	// definir los index del PreOrder
	static int edgeCounter = 0;

	/**
	 * Método para añadir nodos en lista de adyacencia para gráfo no dirigido
	 * 
	 * @param a Nodo 1
	 * @param b Nodo 2
	 */
	static void addNodes(int a, int b) {
		/*
		 * Por cada nueva arísta que se ingrese se guarda en un Pair de la siguiente
		 * manera:
		 * 
		 * adj.get(Nodo al cual se le va a añadir el vecino || Origen).add(new int[]
		 * {Nodo vecino || Destino, Identificador para saber cual es el origen y destino
		 * de una arista});
		 *
		 */
		int id = edgeCounter++;
		adj.get(a).add(new int[] { b, id });
		adj.get(b).add(new int[] { a, id });
	}

	/*
	 * Variables criticalLinks = Representa cuantos puentes hay en el grafo
	 * (cantidad) time = Variable auxiliar, representa el indice que va a ser
	 * añadido como PreOrder a cada nodo (++index) bridges = Guarda los puentes en
	 * formato {int minimo entre Nodo Parent y Nodo Child , int maximo entre Nodo
	 * Parent y Nodo Child}
	 */
	static int criticalLinks = 0;
	static int time = 0;
	static List<int[]> bridges = new ArrayList<int[]>();

	/**
	 * Método DFS Iterativo (para evitar StackOverflow) de SpanningTree.
	 * 
	 * Simula la recursión de un DFS normal usando dos stacks paralelos: uno guarda
	 * el nodo actual (nodeStack) y el otro guarda el iterador de sus vecinos
	 * (iterStack), de forma que ambos siempre están sincronizados en la misma
	 * posición del "call stack" simulado.
	 * 
	 * @param start Raíz del árbol, inicio del DFS spanning Tree
	 */
	static void DFS_Puentes(int start) {

		// Stacks
		ArrayDeque<Integer> nodeStack = new ArrayDeque<Integer>();
		ArrayDeque<Iterator<int[]>> iterStack = new ArrayDeque<Iterator<int[]>>();

		// Se marca la raíz como visitada y se le asigna su índice de PreOrder.
		// Como es raíz, low[start] arranca siendo igual a su propio preOrd
		// (todavía no ha alcanzado a nadie más "alto" en el árbol).
		visited[start] = true;
		preOrd[start] = low[start] = ++time;
		// Se coloca start como primer elemento del stack: representa la
		// primera "llamada recursiva" simulada, DFS(start).
		nodeStack.push(start);
		// Se guarda el iterador de sus vecinos en la misma posición del
		// stack, para poder retomar la iteración exactamente donde se
		// quedó cada vez que se vuelva a este nivel.
		iterStack.push(adj.get(start).iterator());

		// Mientras queden nodos "abiertos" (equivalente a que la recursión
		// no haya vuelto por completo al inicio).
		while (!nodeStack.isEmpty()) {
			// u = nodo actual que se está explorando (tope del stack).
			int u = nodeStack.peek();
			// it = iterador de los vecinos de u, en el punto donde se quedó.
			Iterator<int[]> it = iterStack.peek();

			if (it.hasNext()) {
				// Todavía hay vecinos de u por revisar: se simula "bajar" un nivel más.
				int[] edge = it.next();
				int v = edge[0]; // Nodo vecino
				int eid = edge[1]; // Identificador de la arista (u,v)

				if (!visited[v]) {
					/*
					 * v no ha sido visitado: es un nodo hijo nuevo en el Spanning Tree.
					 * 
					 * Se guarda por cuál arista se llegó a v (parentEdge), para luego poder
					 * distinguir la arista hacia el padre de una arista paralela hacia el mismo
					 * nodo padre (por eso se compara por eid y no por nodo).
					 * 
					 * Se "empuja" v al stack simulando la llamada recursiva DFS(v).
					 */
					parentEdge[v] = eid;
					visited[v] = true;
					preOrd[v] = low[v] = ++time;
					nodeStack.push(v);
					iterStack.push(adj.get(v).iterator());
				} else if (eid != parentEdge[u]) {
					/*
					 * v ya fue visitado y la arista por la que se llegó (eid) NO es la misma por la
					 * que u llegó a su padre. Esto quiere decir que es un "back edge": v es un
					 * ancestro de u en el árbol (en grafo no dirigido no existen cross edges), o
					 * una arista paralela distinta hacia el padre.
					 * 
					 * Se actualiza low[u] con el PreOrder de v, ya que desde u se puede "escapar"
					 * hacia arriba hasta v sin usar la arista del árbol.
					 * 
					 * Nota: se usa preOrd[v] y no low[v], porque v puede seguir en proceso (todavía
					 * en el stack) y su low aún no está finalizado.
					 */
					low[u] = Math.min(low[u], preOrd[v]);
				}
			} else {
				/*
				 * u ya no tiene más vecinos por revisar: se simula el "return" de la llamada
				 * recursiva DFS(u), por lo que se saca del stack.
				 */
				nodeStack.pop();
				iterStack.pop();
				if (!nodeStack.isEmpty()) {
					// p = padre de u en el Spanning Tree (nuevo tope del stack).
					int p = nodeStack.peek();

					// Se propaga hacia arriba el low de u: el padre también puede
					// alcanzar todo lo que u pueda alcanzar.
					low[p] = Math.min(low[p], low[u]);

					/*
					 * Condición de puente: si desde el subárbol de u no se puede alcanzar a p ni a
					 * ningún ancestro de p (low[u] > preOrd[p]), entonces la arista (p, u) es un
					 * puente, porque removerla desconecta a u (y a todo su subárbol) del resto del
					 * grafo.
					 */
					if (low[u] > preOrd[p]) {
						int a = Math.min(p, u);
						int b = Math.max(p, u);
						bridges.add(new int[] { a, b });
						criticalLinks++;
					}
				}
			}
		}
	}

	/**
	 * Método que ejecuta el programa
	 * 
	 * @param args
	 * @throws IOException Captura excepcion de entrada y salidas por BufferedReader
	 */
	public static void main(String[] args) throws IOException {
		// Métodos de entradas y salidas rápidas
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st;

		String line;
		// EOF
		while ((line = br.readLine()) != null) {
			// Si se ingresa una linea en blanco, continue a la siguiente iteración del
			// while (si hay más input)
			if (line.trim().isEmpty())
				continue;

			// Caso especifico de ejercicio UVA 796
			// Si, la cantidad de nodos que se van a ingresar es 0, hay 0 puentes
			if (line.trim().equals("0")) {
				pw.println("0 critical links");
				pw.println();
				pw.flush();
				continue;
			}

			// Cantidad de nodos maxima
			int nodeCant = Integer.parseInt(line.trim());

			// Inicializar componentes
			init(nodeCant);
			// Poner el contador de aristas en 0
			edgeCounter = 0;

			/*
			 * Lectura de datos en formato: for(Cantidad Max de nodos, se leen sus aristas)
			 * int NodoOrigen + " " + String "(Cantidad de Conexiones)" + " " +
			 * for(cantConexiones) int NodoDestino;
			 */
			for (int i = 0; i < nodeCant; i++) {
				st = new StringTokenizer(br.readLine());
				int nodOrigin = Integer.parseInt(st.nextToken());
				StringBuilder amm = new StringBuilder(st.nextToken());
				amm = new StringBuilder(amm.subSequence(1, amm.length() - 1));
				int conex = Integer.parseInt(amm.toString());
				for (int j = 0; j < conex; j++) {
					int nodeDest = Integer.parseInt(st.nextToken());
					if (nodOrigin < nodeDest) {
						/*
						 * Si el nodo origen es menor que el destino, entonces añadelo como nodo a la
						 * lista de adyacencia, sirve para evitar que se añada dos veces una misma
						 * arista
						 */
						addNodes(nodOrigin, nodeDest);
					}
				}
			}

			// Si el nodo no ha sido revisado, hagale DFS (cada iteracion exitosa donde se
			// entra al dfs es un subgrafo / subarbol)
			for (int i = 0; i < nodeCant; i++) {
				if (visited[i] == false)
					// i = nodo
					DFS_Puentes(i);
			}

			// Formato de output especifico para el problema UVA 796
			// Se deben presentar los puentes en orden ascendente
			// Se sortea la lista bridges comparando arreglos de enteros
			// Si su nodo no es igual, entonces se ordena por cual nodo es menor-mayor
			// en caso de que se este revisando el mismo nodo
			// Se ordenan en orden ascendente de id (orden de aparicion de la arista)
			Collections.sort(bridges, new Comparator<int[]>() {
				public int compare(int[] x, int[] y) {
					if (x[0] != y[0])
						return Integer.compare(x[0], y[0]);
					return Integer.compare(x[1], y[1]);
				}
			});
			
			//StringBuilder para output
			StringBuilder ans = new StringBuilder();
			//Por cada puente añadirlo a la respuesta (junto a un salto de linea)
			for (int[] b : bridges) {
				ans.append(b[0] + " - " + b[1] + "\n");
			}
			
			//Output el resultado (n° puentes + cada uno de ellos separados por \n"
			pw.println(criticalLinks + " critical links");
			pw.print(ans);
			pw.println();
			pw.flush();
			
			//IMPORTANTE
			//Si se manejan las listas y arreglos de manera estatica se DEBEN reiniciar si contiene mas de un caso de prueba
			//Tambien se puede plantear definir e instanciar los arreglos y listas en un metodo aparte que llame al DFS_Puente
			bridges.clear();
			criticalLinks = 0;
			time = 0;
		}
		//Metodo del Print Writer para limpiar el caché por cada iteración (SIN ESTO NO VA A MOSTRAR NADA EN SALIDA)
		pw.flush();
	}
}
