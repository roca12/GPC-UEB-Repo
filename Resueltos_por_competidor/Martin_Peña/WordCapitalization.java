/*
* Autor: pgms1103-afk
* Problema: A. Word Capitalization
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/281/A
*/
import java.util.Scanner;

public class WordCapitalization {

	static Scanner sc = new Scanner (System.in);
	public static void main(String[] args) {
		
		StringBuilder s = new StringBuilder (sc.next());
		
		s.replace(0, 1, String.valueOf(Character.toUpperCase(s.charAt(0))));
		
		System.out.println(s);
		

	}

}
