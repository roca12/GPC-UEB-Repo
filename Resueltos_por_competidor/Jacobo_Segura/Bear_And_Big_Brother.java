/* 
Codeforces 791A - Bear and Big Brother
https://codeforces.com/problemset/problem/791/A 
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt(), b = sc.nextInt(), y = 0;
		while(true) {
			a = a*3;
			b = b*2;
			y++;
			if(a>b) {
				break;
			}
		}
		System.out.println(y);
	}
}
