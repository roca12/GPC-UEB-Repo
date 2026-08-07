/* 
Codeforces 59A - Word
https://codeforces.com/problemset/problem/59/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int mayus = 0, minus = 0;
		
		for(int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			
			if(Character.isUpperCase(c)) {
				mayus++;
			}else {
				minus++;
			}
		}
		
		if(mayus>minus) {
			System.out.println(s.toUpperCase());
		}else {
			System.out.println(s.toLowerCase());
		}
	}
}
