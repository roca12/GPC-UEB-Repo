/*
 * Autor: Juan Andres Garcia
 * Problema: Good Contest
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2266/problem/A
 *  **/


import java.util.Scanner;

public class GoodContest {
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		StringBuilder sb = new StringBuilder();
		
		
		int T = sc.nextInt(); 
		
		for(int i = 1; i <=T; i++) {
			
			int participantes = sc.nextInt();
			
			
			int p1 = sc.nextInt();
			int p2 = sc.nextInt();
			int p3 = sc.nextInt();
			
			int coso = 0;
			int result = 0;
			
			
			coso = Math.min(p1, Math.min(p2, p3));
			
			
			result = participantes - coso;
			
			
			sb.append(result+"\n");
			
				
			
			
			
		}
		
		
		System.out.println(sb.toString());
		
		
	}

}
