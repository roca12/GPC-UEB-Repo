import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : D. Ring Game
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/statementsWarmUp(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		long ppink = Long.parseLong(st.nextToken());
		long pblue = Long.parseLong(st.nextToken());
		long a = Long.parseLong(br.readLine());
		long max = 0;
		for (long i = 0; i <= a; i++) {
			long ada = i * ppink;
			long py = (a - i) * pblue;
			max = Math.max(max, ada * py);
		}
		System.out.println(max);
	}
}
