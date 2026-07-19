/*
 * Autor: OtherSpanish
 * Problema: Masha and the Garland
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2244/problem/E
 */

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int n = Integer.parseInt(st.nextToken());
            int q = Integer.parseInt(st.nextToken());

            String s = br.readLine().trim();

            int[] c = new int[n + 1];
            for (int i = 1; i <= n; i++) {
                int bit = s.charAt(i - 1) - '0';
                c[i] = bit ^ (i & 1);
            }

            int[] p = new int[n + 1];
            for (int i = 2; i <= n; i++) {
                int trans = (c[i] != c[i - 1]) ? 1 : 0;
                p[i] = p[i - 1] + trans;
            }

            for (int j = 0; j < q; j++) {
                st = new StringTokenizer(br.readLine());
                int l = Integer.parseInt(st.nextToken());
                int r = Integer.parseInt(st.nextToken());
                int k = Integer.parseInt(st.nextToken());

                int d = p[r] - p[l];
                int minOps = (d + 1) / 2;

                sb.append(k >= minOps ? "YES" : "NO").append('\n');
            }
        }

        System.out.print(sb);
    }
}
