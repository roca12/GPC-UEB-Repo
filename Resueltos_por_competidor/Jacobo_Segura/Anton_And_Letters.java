/* 
Codeforces 443A - Anton and Letters
https://codeforces.com/problemset/problem/443/A
*/
import java.util.HashSet;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashSet<Character> set = new HashSet<>();
		String cadena = sc.nextLine();
		for(int i = 0; i < cadena.length(); i++) {
			char c = cadena.charAt(i);
			if(c >= 'a' && c<='z') {
				set.add(c);
			}
		}
		System.out.println(set.size());
	}
}
