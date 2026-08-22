/* 
Codeforces 1328A - Divisibility Problem
https://codeforces.com/problemset/problem/1328/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		for(int i = 0; i < t; i++) {
			int a = sc.nextInt(), b = sc.nextInt();
			int cont = 0;
			while(true) {
				if(a % b == 0) {
					System.out.println(cont);
					break;
				}else {
					a++;
					cont++;
				}
			}
		}
	}
}
