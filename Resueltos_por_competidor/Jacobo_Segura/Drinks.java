/* 
Codeforces 200B - Drinks
https://codeforces.com/problemset/problem/200/B
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		double cont = 0;
		for(int i = 0; i<n; i++) {
			int p = sc.nextInt();
			cont += p;
		}
		System.out.println(cont/n);
	}
}
