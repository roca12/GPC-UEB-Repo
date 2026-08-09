/*
 * Autor: Gabriella Castro
 * Problema: Magnets
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/344/A
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Magnets {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine().trim());
        
        int grupos = 1;
        String previo = br.readLine().trim();
        
        for (int i = 1; i < n; i++) {
            String actual = br.readLine().trim();
            if (!actual.equals(previo)) {
                grupos++;
                previo = actual;
            }
        }
        
        System.out.println(grupos);
    }
}
