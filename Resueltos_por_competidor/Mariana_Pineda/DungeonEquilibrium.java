import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : D.Dungeon Equilibrium
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://codeforces.com/gym/106225/problem/D
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int n = Integer.parseInt(br.readLine());
		int[] a = new int[n];
		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < a.length; i++) {
			a[i] = Integer.parseInt(st.nextToken());
		}
		Arrays.sort(a);
		int[] b = new int[a[n - 1] + 1];
		Arrays.fill(b, 0);
		int cont = 0;
		int c = 0;
		for (int i = 0; i < a.length; i++) {
			b[a[i]]++;
		}
		for (int i = 0; i < b.length; i++) {
			if (b[i] < i) {
				cont += b[i];
			} else if (b[i] > i) {
				cont += b[i] - i;
			} else if (i == 0) {
				cont += b[i];
			}
		}
		System.out.println(cont);
	}
}
