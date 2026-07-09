import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

	/*
	 * Autor: Code Queens
	 * Problema : La clasificacion de Annie Jump Canon
	 * Juez online: omegaUp 
	 * Veredicto: Accepted
	 * URL: https://omegaup.com/arena/CB062026IA/#problems/clasificacion-de-estrellas-ajc
	 */

	//	Clase para guardar una estrella
	static class Estrella {
		String nombre;
		int temperatura;

		public Estrella(String nombre, int temperatura) {
			this.nombre = nombre;
			this.temperatura = temperatura;
		}
	}

//	QUICK SORT
	static int partition(Estrella arr[], int low, int high) {
//		Elige el ultimo elemento como pivote
		Estrella pivot = arr[high];
		int i = (low - 1);
		for (int j = low; j < high; j++) {
			if (arr[j].temperatura > pivot.temperatura
					|| (arr[j].temperatura == pivot.temperatura && arr[j].nombre.compareTo(pivot.nombre) < 0)) {
				i++;
				Estrella temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		Estrella temp = arr[i + 1];
		arr[i + 1] = arr[high];
		arr[high] = temp;

		return i + 1;
	}

	static void sort(Estrella arr[], int low, int high) {
//		Recursivamente ordena elementos antes de la particion y despues de la particion
		if (low < high) {
			int pi = partition(arr, low, high);
			sort(arr, low, pi - 1);
			sort(arr, pi + 1, high);
		}
	}

	static void printArray(Estrella[] estrellas) {
//		Imprime la solución
		int n = estrellas.length;
		for (int i = 0; i < n; ++i) {
			System.out.println(estrellas[i].nombre);
		}
	}

	public static void main(String[] args) throws IOException {
		// Se usa BufferedReader y StringTokenizer para lectura mas rapida
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		StringTokenizer st;
		// Se crea el arreglo de objeto Estrellas con las condiciones dadas
		Estrella[] estrellas = new Estrella[n];
		String nombre;
		int temp;
		for (int i = 0; i < n; i++) {
			// Se le da valor a cada Estrella
			st = new StringTokenizer(br.readLine());
			nombre = st.nextToken();
			temp = Integer.parseInt(st.nextToken());
			estrellas[i] = new Estrella(nombre, temp);
		}
		// Se ordenan las estrellas
		sort(estrellas, 0, n - 1);
		// Se imprimen unicamente los nombres de las estrellas
		printArray(estrellas);
	}
}
