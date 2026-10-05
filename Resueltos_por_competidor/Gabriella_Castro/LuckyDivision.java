/*
 * Autor: Gabriella Castro
 * Problema: Lucky Division
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/122/A
 */

import java.util.Scanner;

public class LuckyDivision {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        if (!sc.hasNextInt()) {
            return;
        }
        
        int n = sc.nextInt();
        boolean casiLucky = false;
        
        for (int i = 1; i <= n; i++) {
            if (n % i == 0 && isLucky(i)) {
                casiLucky = true;
                break;
            }
        }
        
        if (casiLucky) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
        
        sc.close();
    }
    
    private static boolean isLucky(int num) {
        while (num > 0) {
            int digito = num % 10;
            if (digito != 4 && digito != 7) {
                return false;
            }
            num /= 10;
        }
        return true;
    }
}
