/* 
Codeforces 161A - Tram
https://codeforces.com/problemset/problem/116/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int cont = 0;
		int max = 0;
		for(int i = 0; i < n; i++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			cont -= a;
			cont += b;
			if(cont > max) {
				max = cont;
			}
		}
		System.out.println(max);
	}
}
