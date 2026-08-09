/*
* Autor: pgms1103-afk
* Problema: A. Stones on the Table
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/266/A
*/
import java.util.Scanner;

public class StonesOnTheTable {

	static Scanner sc = new Scanner (System.in);
	public static void main(String[] args) {
		
		int n = sc.nextInt();
		String s = sc.next();
		
		int contador = 0;
		for (int i = 0; i < s.length()-1; i++) {
			if(s.charAt(i) == s.charAt(i+1)) {
				contador++;
			}
		}
		
		System.out.println(contador);

	}

}
