/*
* Autor: pgms1103-afk
* Problema: A. Anton and Danik
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/734/A
*/
import java.util.Scanner;

public class AntonAndDanik {

	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		sc.nextInt();
		String s = sc.next();
		
		int d = 0;
		int a = 0;
		for (int i = 0; i < s.length(); i++) {
			if(s.charAt(i) == 'A') {
				a++;
			}else {
				d++;
			}
		}
		
		if(a > d) {
			System.out.println("Anton");
		}else if (d > a) {
			System.out.println("Danik");
		}else {
			System.out.println("Friendship");
		}
		

	}

}
