/* 
Codeforces 266B - Queue at the School
https://codeforces.com/problemset/problem/266/B
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), t = sc.nextInt();
		String s = sc.next();
		
		char[] a = s.toCharArray();
		
		for(int k = 0; k < t; k++) {
			for(int i = 0; i < n - 1; i++) {
				if(a[i] == 'B' && a[i+1] == 'G') {
					char g = a[i];
					a[i] = a[i+1];
					a[i+1] = g;
					i++;
				}
			}
		}
		System.out.println(new String(a));
	}
}
