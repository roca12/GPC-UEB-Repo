import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashSet;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : 10887-Concatenation of Languages
	 * Juez online: OnlineJudge
	 * Veredicto: Accepted 
	 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1828
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		int m = 0;
		int n = 0;
		int a = 1;
		HashSet<String> ay = new HashSet<>();
		StringTokenizer st;
		String[] ayuda, help;
		while (t > 0) {
			st = new StringTokenizer(br.readLine());
			m = Integer.parseInt(st.nextToken());
			n = Integer.parseInt(st.nextToken());
			ayuda = new String[m];
			help = new String[n];
			for (int i = 0; i < m; i++) {
				ayuda[i] = br.readLine();
			}
			for (int i = 0; i < n; i++) {
				help[i] = br.readLine();
			}

			for (int i = 0; i < ayuda.length; i++) {
				for (int j = 0; j < help.length; j++) {
					ay.add(ayuda[i] + help[j]);
				}
			}
			System.out.println("Case " + a + ": " + ay.size());
			ay.clear();
			a++;
			t--;
		}

	}
}
