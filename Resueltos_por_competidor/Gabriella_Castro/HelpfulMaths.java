/*
 * Autor: Gabriella Castro
 * Problema: Helpful Maths
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/339/A
 */

import java.util.Scanner;
import java.util.Arrays;
 
public class HelpfulMaths {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
 
		if (scanner.hasNext()) {
			String s = scanner.next();
 
			String[] nums = s.split("\\+");
 
			Arrays.sort(nums);
 
			System.out.println(String.join("+", nums));
		}
 
	}
}
