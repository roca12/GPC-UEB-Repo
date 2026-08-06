/*
* Autor: pgms1103-afk
* Problema: A. Boy or Girl
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/236/A
*/

import java.util.HashSet;
import java.util.Scanner;

public class BoyOrGirl {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		String palabra = sc.next();

		HashSet<Character> noRepetidos = new HashSet<>();
		for (int i = 0; i < palabra.length(); i++) {
			noRepetidos.add(palabra.charAt(i));
		}
	
		
		if (noRepetidos.size() % 2 == 0) {
			System.out.println("CHAT WITH HER!");
		} else {
			System.out.println( "IGNORE HIM!");
		}

	}
}
