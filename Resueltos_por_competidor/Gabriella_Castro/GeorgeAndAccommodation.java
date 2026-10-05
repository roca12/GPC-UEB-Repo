/*
 * Autor: Gabriella Castro
 * Problema: George and Accommodation
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/467/A
 */

import java.util.Scanner;

public class GeorgeAndAccommodation {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        if (!sc.hasNextInt()) {
            return;
        }
        
        int n = sc.nextInt();
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            int p = sc.nextInt(); 
            int q = sc.nextInt();
            
            if (q - p >= 2) {
                count++;
            }
        }
        
        System.out.println(count);
    }
}
