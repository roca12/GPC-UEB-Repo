/*
 * Autor: Gabriella Castro
 * Problema: 	A Different Problem
 * Juez online: Kattis
 * Veredicto: Accepted
 * URL: https://open.kattis.com/problems/different
 */

import java.util.Scanner;

public class different {
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        while(sc.hasNextLong()) {
            
            long h = sc.nextLong();
            long g = sc.nextLong();
            
            long res = Math.abs(h - g);
            
            System.out.println(res);
            
        }
    }
}
