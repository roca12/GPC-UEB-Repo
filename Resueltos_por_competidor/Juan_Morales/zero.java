/*
 * Autor: OtherSpanish
 * Problema: Zero
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/101473/attachments
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class zero {
//A
	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st = new StringTokenizer(br.readLine());
		int a = Integer.parseInt(st.nextToken()), b = Integer.parseInt(st.nextToken()),
				c = Integer.parseInt(st.nextToken());

		if ((a + b + c) == 3 || (a + b + c) == 0) {
			pw.println("*");
		} else if (a != b && a != c) {
			pw.println("A");
		} else if (b != a && b != c) {
			pw.println("B");
		} else {
			pw.println("C");
		}

		pw.flush();
	}
}
