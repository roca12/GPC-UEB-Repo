/*
 * Autor: OtherSpanish
 * Problema: Creating Words
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1985/problem/A
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st;
		int tc = Integer.parseInt(br.readLine());
		for (int i = 0; i < tc; i++) {
			st = new StringTokenizer(br.readLine());
			String un = st.nextToken(), dos = st.nextToken();
			char[] pal1 = un.toCharArray(), pal2 = dos.toCharArray();
			pal1[0] = dos.charAt(0);
			pal2[0] = un.charAt(0);
			StringBuilder ans = new StringBuilder();
			ans.append(pal1);
			ans.append(" ");
			ans.append(pal2);
			
			pw.println(ans.toString());

		}

		pw.flush();

	}
}
