/*
 * Autor: OtherSpanish
 * Problema: Counting Divisors
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/task/1713
 */

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
    
    int MAX = 1000001;
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    int div[] = new int[MAX];
    for (int d = 1; d < MAX; d++) {
		for (int i = d; i < MAX; i+=d) {
			div[i]++;
		}
	}
    StringBuilder sb = new StringBuilder();
    for (int i = 0; i < n; i++) {
		int x = sc.nextInt();
		sb.append(div[x]).append("\n");
	}
    System.out.println(sb);
	}
}
