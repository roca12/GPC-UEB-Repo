import java.util.Scanner;

public class InSearchOfAnEasyProblem {
	
	/*
	 * Autor: Darkovski7   
	 * Problema: In Search of an Easy Problem
	 * Juez Online: Codeforces
	 * Veredicto: Accepted 
	 * Url: https://codeforces.com/problemset/problem/1030/A
	 */

	static int darkoski = 0;
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for (int i = 0; i < n; i++) {
			
			 darkoski += sc.nextInt();
			
			if (darkoski == 1) {
				System.out.println("HARD");
				break;	
			}
			
		} if (darkoski == 0) {
			System.out.println("EASY");
		}
	}

}
