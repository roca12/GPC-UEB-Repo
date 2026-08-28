/*
* Autor: pgms1103-afk
* Problema: B. Xenia and Ringroad
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/339/B	
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class XeniaAndRingroad {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws NumberFormatException, IOException {

		String datos1[] = br.readLine().split(" ");
		int n = Integer.parseInt(datos1[0]);
		int m = Integer.parseInt(datos1[1]);
		String datos2[] = br.readLine().split(" ");
		int tareas[] = new int[m];
		for (int i = 0; i < datos2.length; i++) {
			tareas[i] = Integer.parseInt(datos2[i]);
		}

		long pasos = 0;
		int casaActual = 1;
		for (int i = 0; i < tareas.length; i++) {
			if (tareas[i] >= casaActual) {
				pasos += tareas[i] - casaActual;
			} else {
				pasos += (n - casaActual) + tareas[i];
			}
			casaActual = tareas[i];
		}
		System.out.println(pasos);


	}

}
