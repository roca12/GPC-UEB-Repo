/*
* Autor: pgms1103-afk
* Problema: A. Petya and Strings
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/112/A
*/

import java.util.Scanner;

public class PetyaAndStrings {
	
	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		String a = sc.next();
		String b = sc.next();
		
		
		
		if(a.compareToIgnoreCase(b) < 0) {
			System.out.println("-1");
		}else if(a.compareToIgnoreCase(b) > 0) {
			System.out.println("1");
		}else {
			System.out.println("0");
		}
		
	}

}
