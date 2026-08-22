/* 
Codeforces 677A - Vanya and Fence
https://codeforces.com/problemset/problem/677/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), h = sc.nextInt(), cont = 0;
		for(int i = 0; i<n; i++) {
			int a = sc.nextInt();
			if(a<=h) {
				cont++;
			}else {
				cont += 2;
			}
		}
		System.out.println(cont);
	}
}
