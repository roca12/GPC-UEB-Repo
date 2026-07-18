/*
 * Autor: OtherSpanish
 * Problema: Stepan and Permutation
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2244/problem/C
 */
import java.io.*;
import java.util.*;

public class Main {

    static int[] parent;
    static int[] size;

    static int find(int a) {
        while (parent[a] != a) {
            parent[a] = parent[parent[a]];
            a = parent[a];
        }
        return a;
    }

    static void union(int a, int b) {
        int ra = find(a);
        int rb = find(b);
        if (ra == rb) return;
        if (size[ra] < size[rb]) {
            int tmp = ra;
            ra = rb;
            rb = tmp;
        }
        parent[rb] = ra;
        size[ra] += size[rb];
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());

            int[] p = new int[n + 1];
            st = new StringTokenizer(br.readLine());
            for (int i = 1; i <= n; i++) {
                p[i] = Integer.parseInt(st.nextToken());
            }

            parent = new int[n + 1];
            size = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                parent[i] = i;
                size[i] = 1;
            }

            for (int i = 1; i + x <= n; i++) {
                union(i, i + x);
            }
            for (int i = 1; i + y <= n; i++) {
                union(i, i + y);
            }

            boolean ok = true;
            for (int i = 1; i <= n; i++) {
                if (find(i) != find(p[i])) {
                    ok = false;
                    break;
                }
            }

            sb.append(ok ? "YES" : "NO").append('\n');
        }

        System.out.print(sb);
    }
}
