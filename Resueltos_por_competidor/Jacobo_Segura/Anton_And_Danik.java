/* 
Codeforces 734A - Anton and Danik
https://codeforces.com/problemset/problem/734/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		String s = sc.next();
		int anton = 0, danik = 0;
		for(int i = 0; i < n; i++) {
			char c = s.charAt(i);
			if(c == 'A') {
				anton++;
			}else {
				danik++;
			}
		}
		if(anton>danik) {
			System.out.println("Anton");
		}else if(danik>anton) {
			System.out.println("Danik");
		}else {
			System.out.println("Friendship");
		}
	}
}
