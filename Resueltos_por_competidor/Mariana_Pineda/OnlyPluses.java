import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main{
	/*
	 * Autor: mariana 
	 * Problema : A.Only Pluses
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://codeforces.com/contest/1992/problem/A
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int t = Integer.parseInt(br.readLine());
		int[] a = new int[3];
		while (t > 0) {
			st = new StringTokenizer(br.readLine());
			a[0] = Integer.parseInt(st.nextToken());
			a[1] = Integer.parseInt(st.nextToken());
			a[2] = Integer.parseInt(st.nextToken());
			Arrays.sort(a);
			for (int i = 0; i < 5; i++) {
				a[0]++;
				Arrays.sort(a);
			}
			System.out.println(a[0] * a[1] * a[2]);
			t--;
		}
	}
}
