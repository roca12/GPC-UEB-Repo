import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Vanya And Fence
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/677/A
 */


public class VanyaAndFence {

	static int width = 0;
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		int h = sc.nextInt();
		
		for (int i = 0; i < n; i++) {
			int x = sc.nextInt();
			
			if(x > h) {
				width +=2;
			}else if(x <= h) { 
				width +=1;
			}
		}
		System.out.println(width);
	}

}
