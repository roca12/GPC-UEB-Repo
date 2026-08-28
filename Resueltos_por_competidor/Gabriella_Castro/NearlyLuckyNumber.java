/*
 * Autor: Gabriella Castro
 * Problema: Nearly Lucky Number
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/110/A
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class NearlyLuckyNumber {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String s = br.readLine();

        if (s != null) {
            int cont = 0;
            for (char c : s.trim().toCharArray()) {
                if (c == '4' || c == '7') {
                    cont++;
                }
            }

            if (cont == 4 || cont == 7) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
    }
}
