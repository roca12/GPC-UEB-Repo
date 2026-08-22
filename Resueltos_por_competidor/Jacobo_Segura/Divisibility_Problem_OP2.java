/* 
Codeforces 1328A - Divisibility Problem
https://codeforces.com/problemset/problem/1328/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int a = sc.nextInt(), b = sc.nextInt();
			int g = a % b;
			if(g == 0) {
				System.out.println(0);
			}else {
				System.out.println(b-g);
			}
		}
	}
}
