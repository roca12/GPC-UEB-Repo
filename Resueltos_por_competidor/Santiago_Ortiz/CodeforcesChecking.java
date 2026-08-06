import java.util.Scanner;
 
/*
 * Autor: Darkovski7   
 * Problema: Codeforces Checking
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/1791/A
 */

public class CodeforcesChecking {
 
	static String st = "Codeforces";
	
	public static void main(String[] args) {
 
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		for (int i = 0; i < t; i++) {
			
			String s = sc.next();
			char c = s.charAt(0);
			
			if (st.contains(s)) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
		}
	}
 
}