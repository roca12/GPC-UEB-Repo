/*
 * Autor: OtherSpanish
 * Problema: Concatenation of languages
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1828#google_vignette
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st;

		HashSet<String> lol = new HashSet<>();
		String[] prefix, suffix;

		int tc = Integer.parseInt(br.readLine());

		for (int i = 0; i < tc; i++) {
			st = new StringTokenizer(br.readLine());
			int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
			prefix = new String[n];
			suffix = new String[m];

			for (int j = 0; j < n; j++) {
				prefix[j] = br.readLine();
			}

			for (int j = 0; j < m; j++) {
				suffix[j] = br.readLine();
			}

			for (String pre : prefix) {
				for (String suf : suffix) {
					lol.add(pre + "" + suf);
				}
			}

			pw.println("Case " + ((int)i+1) + ": " + lol.size());
			lol.clear();
		}

		pw.flush();

	}
}
