/*
 * Autor: OtherSpanish
 * Problema: Zero Sum
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2247/problem/A
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int tc = Integer.parseInt(br.readLine());
		StringBuilder sb = new StringBuilder();
		while (tc-- > 0) {
			int len = Integer.parseInt(br.readLine());
			StringTokenizer st = new StringTokenizer(br.readLine());
			int sum = 0;
			for (int i = 0; i < len; i++)
				sum += Integer.parseInt(st.nextToken());
			sb.append(sum % 4 == 0 ? "YES" : "NO").append('\n');
		}
		System.out.print(sb);
	}
}
