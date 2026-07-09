/*
 * Autor: OtherSpanish
 * Problema: Ooohisee
 * Juez online: CodeForces
 * Veredicto: Accepted
 * https://codeforces.com/idk
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Ooohisee {

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st = new StringTokenizer(br.readLine());
		int r = Integer.parseInt(st.nextToken()), c = Integer.parseInt(st.nextToken());
		char[][] cont = new char[r][c];
		String res = "";
		int count = 0;

		for (int i = 0; i < r; i++) {
			String ln = br.readLine();
			for (int j = 0; j < c; j++) {
				cont[i][j] = ln.charAt(j);
			}
		}

		for (int i = 1; i < r - 1; i++) {
			for (int j = 1; j < c - 1; j++) {
				if (cont[i][j] == '0') {
					StringBuilder sb = new StringBuilder();
					char NO = cont[i - 1][j - 1], N = cont[i - 1][j], NE = cont[i - 1][j + 1], O = cont[i][j - 1],
							E = cont[i][j + 1], SO = cont[i + 1][j - 1], S = cont[i + 1][j], SE = cont[i + 1][j + 1];
					sb.append(NO).append(N).append(NE).append(O).append(E).append(SO).append(S).append(SE);
					String all = sb.toString();
					if (!all.contains("0") && count == 0) {
						res = (i + 1) + " " + (j + 1);
						count++;
					} else if (!all.contains("0")) {
						count++;
						res = "Oh no! " + count + " locations";

					}

				}

			}
		}
		if (count == 0)
			pw.println("Oh no!");
		if (count > 0)
			pw.println(res);
		pw.flush();
	}

}
