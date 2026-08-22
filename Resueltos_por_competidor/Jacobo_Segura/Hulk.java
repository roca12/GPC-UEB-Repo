/* 
Codeforces 705A - Hulk
https://codeforces.com/problemset/problem/705/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		StringBuilder hulk = new StringBuilder();
		for(int i = 1; i <= n; i++) {
			if(i % 2 == 1) {
				hulk.append("I hate");
				if(i == n) {
					hulk.append(" it");
				}else {
					hulk.append(" that ");
				}
			}else {
				hulk.append("I love");
				if(i == n) {
					hulk.append(" it");
				}else {
					hulk.append(" that ");
				}
			}
		}
		System.out.println(hulk);
	}
}
