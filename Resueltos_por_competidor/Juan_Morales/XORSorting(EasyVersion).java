/*
 * Autor: OtherSpanish
 * Problema: XOR Sorting (Easy Version)
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2247/problem/D1
 */


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int tc = Integer.parseInt(br.readLine());
		
		StringBuilder sb = new StringBuilder();
		
		while (tc-- > 0) {
			
			StringTokenizer st = new StringTokenizer(br.readLine());
			
			int n = Integer.parseInt(st.nextToken());
			int q = Integer.parseInt(st.nextToken());
			
			long[] enc = new long[n];
			
			st = new StringTokenizer(br.readLine());
			
			for (int i = 0; i < n; i++)
				enc[i] = ((long) Integer.parseInt(st.nextToken()) << 20) | i;
			
			Arrays.sort(enc);
			
			int X = 0;
			
			for (int i = 0; i < n; i++) {
				int p = (int) (enc[i] & ((1 << 20) - 1));
				
				X = Math.max(X, p ^ i);
			}
			
			sb.append(X == 0 ? 0 : Integer.highestOneBit(X)).append('\n');
		}
		System.out.print(sb);
	}
}
