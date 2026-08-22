/* 
Codeforces 144A - Arrival of the General
https://codeforces.com/problemset/problem/144/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int[] g = new int[n];
		for(int i = 0; i<n; i++) {
			g[i] = sc.nextInt();
		}
		
		int max = 0, min = 0;
		for(int i = 0; i<n; i++) {
			if(g[i] > g[max]) {
				max = i;
			}
			if(g[i] <= g[min]) {
				min = i;
			}
		}
		int mov = max + (n-1-min);
		if(max > min) {
			mov--;
		}
		System.out.println(mov);
	}
}
