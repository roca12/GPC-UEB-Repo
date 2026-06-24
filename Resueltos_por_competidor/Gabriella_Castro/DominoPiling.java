/*
 * Autor: Gabriella Castro
 * Problema: Domino Piling
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/50/A
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class DominoPiling {
    
    public static void main(String[] args) throws IOException {
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        
        if (line != null) {
            StringTokenizer st = new StringTokenizer(line);
            
            int m = Integer.parseInt(st.nextToken());
            int n = Integer.parseInt(st.nextToken());
            
            int maxDominoes = (m * n) / 2;
            
            System.out.println(maxDominoes);
        }
    }
}
