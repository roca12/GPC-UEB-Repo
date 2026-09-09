/*
 *  Autor: Jean Paul
 * Problema: Sums
 * Juez online: Vjudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/contest/845664#problem/J
 */

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class SumsMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		ArrayList<Integer> pow2 = new ArrayList<Integer>(Arrays.asList(1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024,
				2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608,
				16777216, 33554432, 67108864, 134217728, 268435456, 536870912));
		for (int i = 0; i < t; i++) {
			int n = sc.nextInt();
			if (n <= 2) {
				System.out.println("IMPOSSIBLE");
			} else if (n % 2 == 0) {
				if (pow2.contains(n)) {
					System.out.println("IMPOSSIBLE");
				} else {
					int minDiv = 0;
					
					for(int j = 3; j <= n/2;j++) {
						int a = n-(j*(j-1)/2);
						double b = (double)a/j;
						int c = a/j;
						
						if(b == c) {
							minDiv = c;
							break;
						}
					}
					
					String answ = n + " = " + minDiv;
					int total = minDiv;
					int j = 1;
					while(total < n) {
						answ+=" + " + (minDiv+j);
						total+=minDiv+j;
						j++;
					}
					
					System.out.println(answ);

				}
			} else {
				System.out.println(n + " = " + (n / 2) + " + " + ((n / 2) + 1));
			}
		}
	}
}
