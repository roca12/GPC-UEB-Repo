/* 
Codeforces 344A - Magnets
https://codeforces.com/problemset/problem/344/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), cont = 1;
		String par = sc.next();
		for(int i = 1; i<n; i++) {
			String s = sc.next();
			if(!s.equals(par)) {
				cont++;
			}
			par = s;
		}
		System.out.println(cont);
	}
}
