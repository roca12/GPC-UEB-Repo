/* 
Codeforces 136A - Presents
https://codeforces.com/problemset/problem/136/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] g = new int[n+1];
		
		for(int i = 1; i <= n; i++) {
			int p = sc.nextInt();
			g[p] = i;
		}
		for(int i = 1; i<= n; i++) {
			System.out.print(g[i] + " ");
		}
	}
}
