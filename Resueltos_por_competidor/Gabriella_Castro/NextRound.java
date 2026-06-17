/*
 * Autor: Gabriella Castro
 * Problema: Next Round
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/158/A
 */

import java.util.Scanner;

public class NextRound {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            int k = sc.nextInt();
            
            int[] puntosPersonas = new int[n];
            
            for (int i = 0; i < n; i++) {
                puntosPersonas[i] = sc.nextInt();
            }
            
            int puntaje = puntosPersonas[k - 1];
            int cuentas = 0;
            
            for (int i = 0; i < n; i++) {
                if (puntosPersonas[i] >= puntaje && puntosPersonas[i] > 0) {
                    cuentas++;
                } else {
                    break; 
                }
            }
            
            System.out.println(cuentas);
        }
        
    }
}
