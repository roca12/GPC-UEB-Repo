/*
 * Autor: Gabriella Castro
 * Problema: In Search Of An Easy Problem 
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1030/A
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

public class InSearchOfAnEasyProblem {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        int n = Integer.parseInt(br.readLine().trim());
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        boolean dificil = false;
        
        for (int i = 0; i < n; i++) {
            int opinion = Integer.parseInt(st.nextToken());
            if (opinion == 1) {
                dificil = true;
                break;
            }
        }
        
        if (dificil) {
            System.out.println("HARD");
        } else {
            System.out.println("EASY");
        }
    }
}
