/* 
Codeforces 110A - Nearly Lucky Number
https://codeforces.com/problemset/problem/110/A
*/
import java.util.Scanner;

public class Main {
	static boolean esLucky(int x) {
		if(x == 0) return false;
		
		while (x > 0) {
			int d = x % 10;
			if (d != 4 && d != 7) return false;
			x /= 10;
		}
		return true;
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int cont = 0;
		for(int i = 0; i < s.length(); i++) {
			int c = s.charAt(i);
			if(c == '4' || c == '7') {
				cont++;
			}
		}
		if(esLucky(cont)) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}
}
