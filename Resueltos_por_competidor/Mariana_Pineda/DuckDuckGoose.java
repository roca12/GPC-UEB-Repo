import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : B. Duck Duck Goose
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/statementsWarmUp(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		int p = Integer.parseInt(br.readLine());
		int k = Integer.parseInt(br.readLine());
		int[] patos = new int[n];
		patos[p - 1] = 1;
		int total = 0;
		int i = p;
		while (total != k) {
			if (i == n) {
				i = 0;
			}
			if (patos[i] != 1) {
				total++;
			}
			i++;
		}
		while (true) {
			if (i == n) {
				i = 0;
			}
			if (patos[i] != 1) {
				break;
			}
			i++;
		}
		System.out.println(i + 1);
	}
}
