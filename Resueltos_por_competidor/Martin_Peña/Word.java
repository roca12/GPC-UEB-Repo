/*
* Autor: pgms1103-afk
* Problema: A. Word
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/59/A
*/
import java.util.Scanner;


public class Word {

	static Scanner sc = new Scanner (System.in);
	public static void main(String[] args) {
		
		String a = sc.next();
		
		int mayusculas = 0;
		int minusculas = 0;
		
		for(int i = 0; i<a.length(); i++) {
			char b = a.charAt(i);
			if(Character.isUpperCase(b)) {
				mayusculas++;
			}else {
				minusculas++;
			}
		}

		if(mayusculas > minusculas) {
			System.out.println(a.toUpperCase());
		}else if(minusculas > mayusculas) {
			System.out.println(a.toLowerCase());
		}else {
			System.out.println(a.toLowerCase());
		}
	}

}
