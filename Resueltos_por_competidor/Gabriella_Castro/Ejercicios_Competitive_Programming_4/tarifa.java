/*
 * Autor: Gabriella Castro
 * Problema: 	Tarifa
 * Juez online: Kattis
 * Veredicto: Accepted
 * URL: https://open.kattis.com/problems/tarifa
 */

import java.util.Scanner;

public class tarifa {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int a = sc.nextInt();
        int b = sc.nextInt();

        int c = a * b;

        int res = 0;

        for (int i = 0; i < b; i++) {
            int j = sc.nextInt();
            res += j;
        }

        System.out.println((c - res) + a);

    }
}
