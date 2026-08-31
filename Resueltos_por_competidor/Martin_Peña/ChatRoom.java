/*
* Autor: pgms1103-afk
* Problema: A. Chat room
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/58/A	
*/
import java.util.Scanner;

public class ChatRoom {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		String s = sc.next();
		StringBuilder sb = new StringBuilder();
		boolean sePuede = false;

		for (int i = 0; i < s.length(); i++) {
			if (s.charAt(i) == 'h' && sb.toString().isEmpty()) {
				sb.append('h');
			} else if (s.charAt(i) == 'e' && sb.toString().contains("h")) {
				sb.append('e');
			} else if (s.charAt(i) == 'l' && sb.toString().contains("h") && sb.toString().contains("e")) {
				sb.append('l');
			} else if (s.charAt(i) == 'l' && sb.toString().contains("h") && sb.toString().contains("e") && sb.toString().contains("l")) {
				sb.append('l');
			} else if (s.charAt(i) == 'o' && sb.toString().contains("h") && sb.toString().contains("e") && sb.toString().contains("ll")) {
				sb.append('o');
				sePuede = true;
				break;
			}
		}

//System.out.println(sb);
		if (sePuede) {
			System.out.println("YES");
		}else{
			System.out.println("NO");
		}

	}
}
