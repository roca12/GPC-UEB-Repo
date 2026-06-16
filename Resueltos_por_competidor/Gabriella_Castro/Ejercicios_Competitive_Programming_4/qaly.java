/*
 * Autor: Gabriella Castro
 * Problema: 	Quality-Adjusted Life-Year
 * Juez online: Kattis
 * Veredicto: Accepted
 * URL: https://open.kattis.com/problems/qaly
 */

import java.util.Scanner;

public class qaly {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        if (sc.hasNextInt()) {
            int n = sc.nextInt();
            double totalQaly = 0.0;

            for (int i = 0; i < n; i++) {
                double q = sc.nextDouble();
                double y = sc.nextDouble();
                totalQaly += (q * y);
            }

            System.out.printf("%.3f\n", totalQaly);
        }
    }
}
