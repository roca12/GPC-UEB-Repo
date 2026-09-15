/*
* Autor: pgms1103-afk
* Problema: 10822. Los locos que hacen tick-tocks
* Juez Online: omegaUp
* Veredicto: Correct
* URL: https://omegaup.com/arena/problem/Los-locos-que-hacen-tick-tocks/#problems
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class LosLocosQueHacenTickTocks {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static int n;
	static int p;
	static boolean visitados[];
	static ArrayList<Integer> estudiantes[];
	static ArrayList<Integer> grupos = new ArrayList<>();
	static int otroContador;
	public static void main(String[] args) throws IOException {
		
		String datos[] = br.readLine().split(" ");
		n = Integer.parseInt(datos[0]);
		p = Integer.parseInt(datos[1]);
		visitados = new boolean [n];
		
		estudiantes = new ArrayList[n];
		for (int i = 0; i < n; i++) {
			estudiantes[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < p; i++) {
			String datos2[] = br.readLine().split(" ");
			int estudianteA = Integer.parseInt(datos2[0]);
			int estudianteB = Integer.parseInt(datos2[1]);
			
			estudiantes[estudianteA].add(estudianteB);
			estudiantes[estudianteB].add(estudianteA);
		}
		
	
		
		for (int i = 0; i < n; i++) {
			if(!visitados[i]) {
				otroContador = 0;
				otroContador++;
				dfs(i);
				grupos.add(otroContador);
			}
		}
		
		long respuesta = 0;
		int estudiantesEsperando = 0;
		for (int i = 0; i < grupos.size(); i++) {
			respuesta += grupos.get(i) * estudiantesEsperando;
			estudiantesEsperando+=grupos.get(i);
			
		}
		
		System.out.println(respuesta);
		
	}
	
	static void dfs(int nodo) {
		visitados[nodo] = true;
		for (int vecino : estudiantes[nodo]) {
			if(!visitados[vecino]) {
				otroContador++;
				dfs(vecino);
			}
		}
	}
	

}