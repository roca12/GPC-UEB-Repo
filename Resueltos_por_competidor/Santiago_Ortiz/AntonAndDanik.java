import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Anton and Danik
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/734/A
 */

public class AntonAndDanik {

	static int contadorA = 0;
	static int contadorD = 0;
	
	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		String s = sc.next();
		
		for (int i = 0; i < s.length(); i++) {
			char c = s.charAt(i);
			if (c == 'A') {
				contadorA++;
			}else if (c == 'D') {
				contadorD++;
			}
		}
		if(contadorA > contadorD) {
			System.out.println("Anton");
		}else if (contadorD > contadorA) {
			System.out.println("Danik");
		}else if (contadorA == contadorD) {
			System.out.println("Friendship");
		}
	}

}
