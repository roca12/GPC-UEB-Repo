/*
 * Autor: Gabriella Castro
 * Problema: Bear and Big Brother
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/266/B
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class QueueAtTheSchool {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String linea = br.readLine();
        if (linea == null) return;

        StringTokenizer st = new StringTokenizer(linea);
        int n = Integer.parseInt(st.nextToken());
        int t = Integer.parseInt(st.nextToken());

        char[] s = br.readLine().toCharArray();

        while (t > 0) {
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == 'B' && s[i + 1] == 'G') {
                    s[i] = 'G';
                    s[i + 1] = 'B';
                    i++;
                }
            }
            t--;
        }

        System.out.println(new String(s));
    }
}
