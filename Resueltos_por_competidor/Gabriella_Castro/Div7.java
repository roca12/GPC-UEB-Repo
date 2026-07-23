/*
 * Autor: Gabriella Castro
 * Problema: Div. 7
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1633A
 */

import java.util.Scanner;

public class Main{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        while (t-- > 0) {

            int n = sc.nextInt();

            if (n % 7 == 0) {
                System.out.println(n);
            } else {
                int base = (n / 10) * 10;
                boolean encontrado = false;
                for (int j = 0; j <= 9; j++) {
                    int talvez = base + j;
                    if (talvez % 7 == 0) {
                        System.out.println(talvez);
                        encontrado = true;
                        break;
                    }
                }
            }

        }

    }

}
