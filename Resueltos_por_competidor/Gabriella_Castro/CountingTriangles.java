/*
 * Autor: Gabriella Castro
 * Problema: Counting Triangles
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/Gym-102890C
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;
        
        int t = Integer.parseInt(br.readLine().trim());
        long MOD = 1000000007L;
        
        StringBuilder sb = new StringBuilder();
        
        for (int i = 0; i < t; i++) {
            st = new StringTokenizer(br.readLine());
            if (!st.hasMoreTokens()) continue;
            
            long N = Long.parseLong(st.nextToken());
            long K = Long.parseLong(st.nextToken());
            
            long vertical = (((N + 1) % MOD) * ((N + 2) % MOD)) % MOD;
            
            vertical = (vertical * 500000004L) % MOD;
            
            long horizontal = (K + 1) % MOD;
            
            long totalTriangles = (vertical * horizontal) % MOD;
            
            sb.append(totalTriangles).append("\n");
        }
        
        System.out.print(sb.toString());
    }
}
