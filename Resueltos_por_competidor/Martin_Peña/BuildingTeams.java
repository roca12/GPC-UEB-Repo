/*
* Autor: pgms1103-afk
* Problema: Building Teams
* Juez Online: CSES
* Veredicto: Accepted
* URL: https://cses.fi/problemset/task/1668
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class BuildingTeams {
	
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static ArrayList<Integer> amigos[];
	static boolean visitado[];
	static int equipo[];
	static int elegidoPasado;
	static boolean posible = true;
	public static void main(String[] args) throws IOException {
		
		String datos[] = br.readLine().split(" ");
		int alumno = Integer.parseInt(datos[0]);
		int amistad= Integer.parseInt(datos[1]);
		amigos = new ArrayList[alumno+1];
		visitado = new boolean[alumno+1];
		
		for (int i = 0; i <= alumno; i++) {
			amigos[i] = new ArrayList<>();
		}
		
		for (int i = 0; i < amistad; i++) {
			String datos2[] = br.readLine().split(" ");
			int amigoA = Integer.parseInt(datos2[0]);
			int amigoB = Integer.parseInt(datos2[1]);
			
			amigos[amigoA].add(amigoB);
			amigos[amigoB].add(amigoA);	
		}
		
		equipo = new int[alumno+1];
		for (int i = 1; i <= alumno; i++) {
			if(!visitado[i]) {
				equipo[i] = 1;
				dfs(i, 1);
			}
		}
		
		StringBuilder sb = new StringBuilder();
		if(posible) {
			for (int i = 1; i < equipo.length; i++) {
				sb.append(equipo[i] + " ");
			}
			System.out.println(sb);
		}else {
			System.out.println("IMPOSSIBLE");
		}
		
		
		
	}
	
	static void dfs(int nodo, int elegido) {
		visitado[nodo] = true;
		for (int vecino : amigos[nodo]) {
			if(!visitado[vecino]) {
				if(elegido == 1) {
					equipo[vecino] = 2;
					elegidoPasado = 1;
					dfs(vecino, 2);
				}else if(elegido == 2) {
					equipo[vecino] = 1;
					elegidoPasado = 2;
					dfs(vecino, 1);
				}
			}else {
				if(equipo[vecino] == equipo[nodo]) {
					posible = false;
					break;
				}
			}
		}
	}

}
/*
10 20
3 4
8 10
3 7
1 8
2 8
9 10
2 4
6 9
1 4
3 5
1 9
6 7
2 9
2 7
1 7
4 10
5 6
4 6
3 8
7 10   
 */
