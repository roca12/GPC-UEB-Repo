/*
* Autor: pgms1103-afk
* Problema: Round Trip
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1669
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class RoundTrip {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static ArrayList<Integer> callesConectadas[];
	static boolean visitados[];
	static int anterior[];
	static boolean posible = false;
	static int roptura;
	static int nodoInicio;
	public static void main(String[] args) throws IOException {
		
		String datos[] = br.readLine().split(" ");
		int ciudad = Integer.parseInt(datos[0]);
		int calle= Integer.parseInt(datos[1]);
		callesConectadas = new ArrayList[ciudad+1];
		for (int i = 0; i <= ciudad; i++) {
			callesConectadas[i] = new ArrayList<>();
		}
		
		for (int i = 1; i <= calle; i++) {
			String datos2[] = br.readLine().split(" ");
			int calleA = Integer.parseInt(datos2[0]);
			int calleB = Integer.parseInt(datos2[1]);
			
			callesConectadas[calleA].add(calleB);
			callesConectadas[calleB].add(calleA);
		} 
		
		visitados = new boolean[ciudad+1];
		anterior = new int[ciudad+1];
		
		for (int i = 1; i <= ciudad; i++) {
			if(!visitados[i]) {
				if(!posible) {
					dfs(i, 0);
				}else {
					break;
				}
			}
		}
		
		if(posible) {
			ArrayList<Integer> camino = new ArrayList<>();
			for (int curr = roptura; curr != nodoInicio; curr = anterior[curr]) {
				camino.add(curr);
			}
			camino.add(nodoInicio);
			camino.add(roptura);
			System.out.println(camino.size());
			for (Integer integer : camino) {
				System.out.print(integer + " ");
			}
		}else {
			System.out.println("IMPOSSIBLE");
		}
		
		
		
		
	}

	static void dfs(int nodo, int quienLoDescubrio) {
		if(posible) 
			return;
		visitados[nodo] = true;
		anterior[nodo] = quienLoDescubrio;
		
		for (int vecino : callesConectadas[nodo]) {
			if(!visitados[vecino]) {
				dfs(vecino, nodo);
				if(posible)
					return;
			}else if(visitados[vecino] && anterior[nodo] != vecino) {
				posible = true;
				roptura = nodo;
				nodoInicio = vecino;
				return;
			}
		}
	}
}
