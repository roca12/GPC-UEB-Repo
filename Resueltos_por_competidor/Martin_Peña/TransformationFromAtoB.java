/*
* Autor: pgms1103-afk
* Problema: A. Transformation: from A to B
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/contest/727/problem/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.ArrayList;

public class TransformationFromAtoB {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	static long inicial;
	static long finall;
	static ArrayList<Long> camino;
	static boolean sePuede;

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		inicial = Long.parseLong(datos[0]);
		finall = Long.parseLong(datos[1]);
		camino = new ArrayList<>();
		sePuede = false;
		bfs(inicial);
		if (sePuede) {
			StringBuilder sb = new StringBuilder(String.valueOf(finall));
			StringBuilder rta = new StringBuilder();
			
			while(Long.parseLong(sb.toString()) != inicial) {
				if (sb.toString().endsWith("1")) {
					sb.deleteCharAt(sb.length()-1);
					camino.add(Long.parseLong(sb.toString()));
				}else {
					long operacionTemporal = Long.parseLong(sb.toString());
					operacionTemporal = operacionTemporal/2;
					sb = new StringBuilder(String.valueOf(operacionTemporal));
					camino.add(Long.parseLong(sb.toString()));
				}
			}
			System.out.println("YES");
			System.out.println(camino.size()+1);
			for (int i = camino.size()-1; i >= 0; i--) {
				rta.append(camino.get(i) + " ");
			}
			rta.append(finall);
			System.out.println(rta);
		}else {
			System.out.println("NO");
		}

	}

	static void bfs(long inicio) {
		ArrayDeque<Long> cola = new ArrayDeque<>();
		cola.add(inicio);
		while (!cola.isEmpty()) {
			long actual = cola.poll();

			long multi = actual * 2;
			String operacionMas1 = String.valueOf(actual) + 1;
			long mas1 = Long.parseLong(operacionMas1);

			if (multi == finall) {
				sePuede = true;
				break;
			} else if (mas1 == finall) {
				sePuede = true;
				break;
			} else {
				if (multi < finall) {
					cola.add(multi);
				}
				if (mas1 < finall) {
					cola.add(mas1);
				}
			}

		}
	}

}
