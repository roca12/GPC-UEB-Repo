/*
 * Autor: OtherSpanish
 * Problema: Juan vs Frank
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/106063/problem/J
 */


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

//Fenwick Tree :)))
public class Main {

	static final int MAX = 1000001;
	static long BITree[] = new long[MAX];

	static long XOR(int index) {
		long res = 0;
		index = index + 1;

		while (index > 0) {
			res ^= BITree[index];

			index -= index & (-index);

		}
		return res;

	}

	static void upadeBIT(int n, int index, long val) {
		index = index + 1;
		while (index <= n) {
			BITree[index] ^= val;
			index += index & (-index);

		}

	}

	static void constructBITree(long arr[], int n) {
		for (int i = 1; i <= n; i++) {
			BITree[i] = 0;
		}

		for (int i = 0; i < n; i++) {
			upadeBIT(n, i, arr[i]);

		}

	}

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken()), q = Integer.parseInt(st.nextToken());

		long arr[] = new long[n];

		st = new StringTokenizer(br.readLine());
		for (int i = 0; i < arr.length; i++)
			arr[i] = Integer.parseInt(st.nextToken());

		constructBITree(arr, n);

		StringBuilder sb = new StringBuilder();

		for (int i = 0; i < q; i++) {
			st = new StringTokenizer(br.readLine());
			char type = st.nextToken().charAt(0);

			if (type == 'P') {
				int l = Integer.parseInt(st.nextToken()), r = Integer.parseInt(st.nextToken());
				long x = XOR(r - 1);
				if (l >= 2) {
					x ^= XOR(l - 2);
				}

				if (x != 0)
					sb.append("FRANK\n");
				else
					sb.append("JUAN\n");

			} else {
				int k = Integer.parseInt(st.nextToken());
				long x = Long.parseLong(st.nextToken());
				long nuevo = arr[k - 1] + x;
				upadeBIT(n, k - 1, arr[k - 1] ^ nuevo);
				arr[k - 1] = nuevo;
			}
		}

		PrintWriter pw = new PrintWriter(System.out);
		pw.println(sb);
		pw.flush();

	}

}
