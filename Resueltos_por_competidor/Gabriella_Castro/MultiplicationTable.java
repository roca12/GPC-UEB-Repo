/*
 * Autor: Gabriella Castro
 * Problema: Multiplication Table
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-577A
 */

import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        long n = sc.nextLong();
        long x = sc.nextLong();

        int cont = 0;

        for (long i = 1; i <= n && i <= x; i++) {

            if (x % i == 0) {
                long j = x / i;

                if (j <= n) {
                    cont++;
                }
            }
        }
        System.out.println(cont);
    }

}
