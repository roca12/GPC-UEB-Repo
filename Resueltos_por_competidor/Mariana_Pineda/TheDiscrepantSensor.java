import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : A. The Discrepant Sensor
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/statementsWarmUp(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int n = Integer.parseInt(br.readLine());
		int a = 0;
		int b = 0;
		int c = 0;
		while (n-- > 0) {
			st = new StringTokenizer(br.readLine());
			a = Integer.parseInt(st.nextToken());
			b = Integer.parseInt(st.nextToken());
			c = Integer.parseInt(st.nextToken());
			if (a == b) {
				System.out.println(c);
			} else if (b == c) {
				System.out.println(a);
			} else {
				System.out.println(b);
			}
		}
	}
}
