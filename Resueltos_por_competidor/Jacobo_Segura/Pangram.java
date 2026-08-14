/* 
Codeforces 520A - Pangram
https://codeforces.com/problemset/problem/520/A
*/
import java.util.HashSet;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashSet<Character> set = new HashSet();
		int n = sc.nextInt();
		String s = sc.next();
		s = s.toLowerCase();
		
		for(int i = 0; i<n; i++) {
			set.add(s.charAt(i));
		}
		if(set.size() == 26) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}
}
