import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	/*
	 * Autor: Mariana 
	 * Problema : A. Riptide
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://codeforces.com/contest/2254/problem/A
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());
		StringTokenizer st;
		int a, b, c, count, d, e;
		while (t > 0) {
			st = new StringTokenizer(br.readLine());
			a = Integer.parseInt(st.nextToken());
			b = Integer.parseInt(st.nextToken());
			count = 0;
			c = Integer.parseInt(st.nextToken());
			while (true) {
				if (a == b || a == c || b == c) {
					System.out.println(count);
					break;
				} else {
					d = Math.max(a, b);
					d = Math.max(d, c);
					e = Math.min(a, b);
					e = Math.min(e, c);
					count++;
					if (d == a) {
						a--;
						if (e == c) {
							c++;
						} else {
							b++;
						}
					} else if (d == b) {
						b--;
						if (e == c) {
							c++;
						} else {
							a++;
						}
					} else {
						c--;
						if (e == a) {
							a++;
						} else {
							b++;
						}
					}
				}
			}
			t--;
		}
	}

}
