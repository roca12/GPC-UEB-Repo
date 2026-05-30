import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : Atsa y El Torneo de Programación
	 * Juez online: omegaUp 
	 * Veredicto: 35%
	 * URL: https://omegaup.com/arena/problem/atsa-copa-fut/
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int n = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		int[] a = new int[n];
		long total = 0;
		for (int i = 0; i < n; i++) {
			a[i] = Integer.parseInt(st.nextToken());
		}
		for (int i = 0; i < a.length; i++) {
			for (int j = i + 1; j < a.length; j++) {
				total += a[i] * a[j];
			}
		}
		System.out.println(total);
	}
}
