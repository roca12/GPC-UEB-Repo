/*
 * Autor: Gabriella Castro
 * Problema: Minority
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1633B
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());

		while (t-- > 0) {
			String s = br.readLine();
			int n = s.length();
			int ceros = 0;
			int unos = 0;

			for (char c : s.toCharArray()) {
				if (c == '0')
					ceros++;
				else
					unos++;
			}

			if (ceros != unos) {
				System.out.println(Math.min(ceros, unos));
			} else {
				System.out.println(ceros - 1);
			}
		}
	}

}
