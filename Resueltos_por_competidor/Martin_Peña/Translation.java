/*
* Autor: pgms1103-afk
* Problema: A. Translation
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/41/A
*/
import java.util.Scanner;

public class Translation {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		String s = sc.next();
		String t = sc.next();
		StringBuilder sb = new StringBuilder();
		for (int i = s.length(); i >= 1; i--) {
			sb.append(s.charAt(i - 1));
		}

		if (t.equals(sb.toString())) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}

	}

}
