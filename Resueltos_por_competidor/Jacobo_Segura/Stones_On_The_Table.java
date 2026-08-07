/* 
Codeforces 266A - Stones on the Table
https://codeforces.com/problemset/problem/266/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s = sc.next();
		int c = 0;
		
		for(int i = 1; i < n; i++) {
			if(s.charAt(i) == s.charAt(i-1)) {
				c++;
			}
		}
		System.out.println(c);
	}
}
