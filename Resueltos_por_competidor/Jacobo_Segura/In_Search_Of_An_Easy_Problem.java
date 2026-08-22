/* 
Codeforces 1030A - In Search of an Easy Problem
https://codeforces.com/problemset/problem/1030/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		boolean r = true;
		for(int i = 0; i<n; i++) {
			int g = sc.nextInt();
			if(g == 1) {
				r = false;
			}
		}
		if(r) {
			System.out.println("EASY");
		}else {
			System.out.println("HARD");
		}
	}
}
