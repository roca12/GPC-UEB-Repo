/*
* Autor: pgms1103-afk
* Problema: B. Queue at the School
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/266/B
*/
import java.util.Scanner;

public class QueueAtTheSchool {

	static Scanner sc = new Scanner (System.in);
	public static void main(String[] args) {
		
		int n = sc.nextInt();
		int t = sc.nextInt();
		StringBuilder sb = new StringBuilder(sc.next());
		
		while(t != 0) {
			for (int i = 0; i < sb.length()-1; i++) {
				if(sb.charAt(i) == 'B' && sb.charAt(i+1) == 'G') {					
					sb.setCharAt(i, 'G');
					sb.setCharAt(i+1, 'B');
					i++;
				}
			}
			t--;
		}
		System.out.println(sb);

	}

}
