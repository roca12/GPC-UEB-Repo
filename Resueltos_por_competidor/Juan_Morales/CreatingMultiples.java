/*
 * Autor: OtherSpanish
 * Problema: Creating Multiples
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/103388/problem/C
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
		StringTokenizer st = new StringTokenizer(br.readLine());
		int B = Integer.parseInt(st.nextToken()), L = Integer.parseInt(st.nextToken());

		int[] d = new int[L];

		st = new StringTokenizer(br.readLine());

		int sum = 0;
		for (int i = 0; i < L; i++) {
			d[i] = Integer.parseInt(st.nextToken());
			if ((i & 1) == 0) {
				sum += d[i];
			} else {
				sum -= d[i];
			}
		}

		int mod = B + 1;
		int r = (sum % mod + mod) % mod;
		if(r==0) {
			pw.println("0 0");
			pw.flush();
			return;
		}
		
		for (int i = 0; i < L; i++) {
			if ((i & 1) == 0) {
				if (d[i] >= r) {
					pw.println((i + 1) + " " + (d[i] - r));
					pw.flush();

					return;
				}
			} else {
				int a = mod - r;
				if (d[i] >= a) {
					pw.println((i + 1) + " " + (d[i] - a));
					pw.flush();

					return;
				}

			}

		}

		pw.println("-1 -1");
		pw.flush();
	}
}
