/*
 * Autor: OtherSpanish
 * Problema: B. Nikita and Books
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2244/problem/B
 */


import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        StringBuilder sb = new StringBuilder();

        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            StringTokenizer st = new StringTokenizer(br.readLine());

            long prefix = 0;
            boolean ok = true;

            for (int i = 0; i < n; i++) {
                long ai = Long.parseLong(st.nextToken());
                prefix += ai;
                long need = (long) (i + 1) * (i + 2) / 2;
                if (need > prefix) {
                    ok = false;
                }
            }

            sb.append(ok ? "YES" : "NO").append('\n');
        }

        System.out.print(sb);
    }
}
