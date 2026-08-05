/*
 * Autor: Thomas Molina
 * Problema: UCRPC F21 A - Senseless Census
 * Juez online: DM:OJ
 * Veredicto: 60/60 (5.0/5 puntos)
 * URL: https://dmoj.ca/problem/ucrpc21a
 */
 

import java.util.Scanner;

public class SenselessCensus {
    public static void main (String[] args){
        Scanner sc = new Scanner (System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int contador =0;
        String matrix[][] = new String[n][m];
        for (int i = 0; i < n; i++){
            String a = sc.next();
            for (int j = 0; j < m; j++){
                matrix[i][j] = String.valueOf(a.charAt(j));
                if (matrix[i][j].equals("t")){
                    contador++;
                }
            }
        }
         System.out.println(contador);
    }
}
