/*
 * Autor: OtherSpanish
 * Problema: Yaroslav and Productivity
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2244/problem/D
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
            int m = Integer.parseInt(st.nextToken());

            long[] a = new long[n + 1];
            st = new StringTokenizer(br.readLine());
            for (int i = 1; i <= n; i++) {
                a[i] = Long.parseLong(st.nextToken());
            }

            boolean[] isBreak = new boolean[n + 1];
            st = new StringTokenizer(br.readLine());
            for (int j = 0; j < m; j++) {
                int b = Integer.parseInt(st.nextToken());
                isBreak[b] = true;
            }

            final long NEG_INF = Long.MIN_VALUE / 4;
            long curPlus = 0;      
            long curMinus = NEG_INF; 
            for (int i = n; i >= 1; i--) {
                if (isBreak[i]) {
                    long newPlus = Math.max(curPlus + a[i], curMinus + a[i]);
                    long newMinus = Math.max(curMinus - a[i], curPlus - a[i]);
                    curPlus = newPlus;
                    curMinus = newMinus;
                } else {
                    curPlus = curPlus + a[i];
                    curMinus = curMinus - a[i];
                }
            }

            long answer = Math.max(curPlus, curMinus);
            sb.append(answer).append('\n');
        }

        System.out.print(sb);
    }
}
