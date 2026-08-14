/* 
Codeforces 467A - George and Accommodation
https://codeforces.com/problemset/problem/467/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), cont = 0;
		for(int i = 0; i < n; i++) {
			int p = sc.nextInt(), q = sc.nextInt();
			if(p<(q-1)) {
				cont++;
			}
		}
		System.out.println(cont);
	}
}
