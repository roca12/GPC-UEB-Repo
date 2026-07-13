/*
 * Autor: OtherSpanish
 * Problema:The Suspects
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3638#google_vignette
 */

import java.io.*;
import java.util.*;


public class Main {

	static final int MAX = 30000;
	static int[] parent = new int[MAX], size = new int[MAX], root = new int[MAX];
	//n = size
	static void Init(int n) {
		for (int i = 0; i<n; i++) {
			parent[i] = i;
			size[i] = 0;
		}
	}

	static int Find(int x) {
		if(parent[x]==x) {
			return x;
		} else {
			return parent[x] = Find(parent[x]);
		}
	}

	static void UnionBySize(int x, int y) {
		int xRaiz = Find(x), yRaiz = Find(y);

		if(xRaiz>yRaiz) {
			parent[yRaiz] = xRaiz;
		} else {
			parent[xRaiz] = yRaiz;

			if(xRaiz==yRaiz) {
				size[yRaiz]++;
			}
		}
	}

	static int nComponents;

	static int getNComponents(int n) {
		nComponents = 0;
		for (int i = 0; i<n; i++) {
			if(parent[i]==i) {
				root[nComponents++] = i;
			}
		}
		return nComponents;
	}


	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st;
		String ln;
		while(!(ln=br.readLine()).equals("0 0")) {
			st = new StringTokenizer(ln);
			int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());
			Init(n);
			for (int i = 0; i<m; i++) {
			    st = new StringTokenizer(br.readLine());
				int k = Integer.parseInt(st.nextToken());
				int first = -1;
				for (int j = 0; j<k; j++) {
					int student = Integer.parseInt(st.nextToken());
					if(j==0) first = student;
					else UnionBySize(first, student);
				}
			}

			int raiz0 = Find(0);
			int cont = 0;

			for (int p = 0; p<n; p++) {
				if(Find(p)==raiz0) cont++;
			}

			pw.println(cont);
		pw.flush();
		}
	}
}
