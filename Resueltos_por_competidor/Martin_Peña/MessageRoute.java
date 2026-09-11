/*
* Autor: pgms1103-afk
* Problema: Message Route
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1667
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;

public class MessageRoute {

	static BufferedReader br = new BufferedReader (new InputStreamReader(System.in)); 
	static boolean visitados[];
	static ArrayList<Integer> compusConectados[];
	static int numeroCompus;
	static int[] padre;
	static boolean llego = false;
	public static void main(String[] args) throws IOException {
		
		
		String datos[] = br.readLine().split(" ");
		numeroCompus = Integer.parseInt(datos[0]);
		int numeroConecciones = Integer.parseInt(datos[1]);
		visitados = new boolean[numeroCompus+1];
		
		padre = new int[numeroCompus + 1];
		compusConectados = new ArrayList[numeroCompus+1];
		for (int i = 0; i < compusConectados.length; i++) {
			compusConectados[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < numeroConecciones; i++) {
			String quienConQuien[] = br.readLine().split(" ");
			int a = Integer.parseInt(quienConQuien[0]);
			int b = Integer.parseInt(quienConQuien[1]);
			
			compusConectados[a].add(b);
			compusConectados[b].add(a);
		}
		
		bfs(1);
		
		if(!visitados[numeroCompus]) {
			System.out.println("IMPOSSIBLE");
		}else {
			ArrayList<Integer> rutaFinal = new ArrayList<>();
			for (int i = numeroCompus; i != 0; i = padre[i] ) {
				rutaFinal.add(i);
			}
			
			System.out.println(rutaFinal.size());
			for (int r = rutaFinal.size()-1; r >= 0; r--) {
				System.out.print(rutaFinal.get(r) + " ");
			}
		}
	}
	
	static void bfs (int inicio) {
		ArrayDeque<Integer> cola = new ArrayDeque<>();	
		cola.add(inicio);
		visitados[inicio] = true;
		
		while(!cola.isEmpty()) {
			int actual = cola.poll();
			
			for (int vecino: compusConectados[actual]) {
					if(!visitados[vecino]) {
						visitados[vecino] = true;
						padre[vecino] = actual;
						cola.add(vecino);
					}
			}
		}
	}
	
	

}
