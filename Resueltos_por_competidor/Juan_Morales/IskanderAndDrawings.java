/*
 * Autor: OtherSpanish
 * Problema: A. Iskander and Drawings

 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/2244/problem/A
 */


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        for (int tc = 0; tc < t; tc++) {
            int n = Integer.parseInt(br.readLine());
            String s = br.readLine();

            int ans = 0;
            int cnt = 0;

            for (int i = 0; i < n; i++) {
                if (s.charAt(i) == '#') {
                    cnt++;
                } else {
                    ans = Math.max(ans, (cnt + 1) / 2);
                    cnt = 0;
                }
            }

            ans = Math.max(ans, (cnt + 1) / 2);

            System.out.printf("%d%n", ans);
        }
    }
}
