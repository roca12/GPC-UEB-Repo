/*
 * Autor: Gabriella Castro
 * Problema: Yes or Yes
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1703/A
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class YesOrYes {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		StringBuilder sb = new StringBuilder();

		int t = Integer.parseInt(br.readLine().trim());

		for (int i = 0; i < t; i++) {

			String s = br.readLine().trim();

			if (s.equalsIgnoreCase("YES")) {
				sb.append("YES\n");
			} else {
				sb.append("NO\n");
			}

		}

		System.out.print(sb.toString());

	}
}
