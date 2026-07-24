import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main{
	/*
	 * Autor: mariana 
	 * Problema : A.Creating Words
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://codeforces.com/contest/1985/problem/A
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st;
		int t = Integer.parseInt(br.readLine());
		while (t > 0) {
			st = new StringTokenizer(br.readLine());
			String a = st.nextToken();
			String b = st.nextToken();
			System.out.print(b.charAt(0));
			for (int i = 1; i < a.length(); i++) {
				System.out.print(a.charAt(i));
			}
			System.out.print(" " + a.charAt(0));
			for (int i = 1; i < b.length(); i++) {
				System.out.print(b.charAt(i));
			}
			if (t != 1) {
				System.out.println();
			}
			t--;
		}
	}
}
