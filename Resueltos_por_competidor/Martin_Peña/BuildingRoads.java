/*
* Autor: pgms1103-afk
* Problema: Building Roads
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1666
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class BuildingRoads {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static ArrayList<Integer>[] callesConectadas;
	static boolean[] visitado;
	public static void main(String[] args) throws IOException {
		
		String datos[] = br.readLine().split(" ");
		int numeroCiudades = Integer.parseInt(datos[0]);
		int calles = Integer.parseInt(datos[1]);

		callesConectadas = new ArrayList[numeroCiudades+1];	
		
		for (int i = 0; i <= numeroCiudades; i++) {
			callesConectadas[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < calles; i++) {
			String datos2[] = br.readLine().split(" ");
			int u = (Integer.parseInt(datos2[0]));
			int v = (Integer.parseInt(datos2[1]));
			
			callesConectadas[u].add(v);
			callesConectadas[v].add(u);
		}
		
		visitado = new boolean[numeroCiudades + 1];
		ArrayList<Integer> representantes = new ArrayList<>();
		int nuevasCarreteras = 0;
		for (int i = 1; i <= numeroCiudades; i++) {
			if(!visitado[i]) {
				nuevasCarreteras++;
				representantes.add(i);
				dfs(i);	
			}
		}
		
		System.out.println(nuevasCarreteras-1);
		if(nuevasCarreteras-1 != 0) {
			for (int i = 0; i < representantes.size()-1; i++) {
				int primero = representantes.get(i);
				int segundo = representantes.get(i+1);
				System.out.println(primero + " " + segundo);
			}
		}
		
	}
	
	static void dfs(int nodo) {
		visitado[nodo] = true;
		for (int vecino :  callesConectadas[nodo]) {
			if(!visitado[vecino]) {
				dfs(vecino);
			}
		}
		
	}

}
