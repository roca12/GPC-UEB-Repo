/*
 * Autor: Thomas Molina
 * Problema: A. Boy or Girl
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/236/A
 */


import java.util.HashSet;
import java.util.Scanner;

public class BoyOrGirl {
	public static void main (String[]args) {
		Scanner sc = new Scanner (System.in);
		String a = sc.next();
		int contador= 0;
		
		HashSet<Character> set = new HashSet<>();
		
		for (int i = 0; i<a.length();i++) {
			set.add(a.charAt(i));
		}
		
		contador  = set.size();
		
		if (contador%2==0) {
			System.out.println("CHAT WITH HER!");
		}
		else if(contador==0) {
			System.out.println("CHAT WITH HER!");
		}
		else {
			System.out.println("IGNORE HIM");
		}
		
		
	}

}
