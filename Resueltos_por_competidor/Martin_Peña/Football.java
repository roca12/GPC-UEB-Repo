/*
* Autor: pgms1103-afk
* Problema: A. Football
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/96/A
*/
	
import java.util.Scanner;
	
	public class Football {
	
		static Scanner sc = new Scanner(System.in);
	
		public static void main(String[] args) {
	
			String s = sc.next();
			int contador0 = 0;
			int contador1 = 0;
			char anterior = ' ';
			boolean peligroso = false;
	
			for (int i = 0; i < s.length(); i++) {
				if (i == 0) {
					anterior = s.charAt(i);
				} else {
					anterior = s.charAt(i - 1);
					if (s.charAt(i) == '0' && anterior == '0') {
						contador0++;
						if (contador0 >= 7) {
							peligroso = true;
							break;
						}
					} else if (s.charAt(i) == '1' && anterior == '1') {
						contador1++;
						if (contador1 >= 7) {
							peligroso = true;
							break;
						}
					} else {
						contador0 = 1;
						contador1 = 1;
					}
	
				}
			}
	
			if (peligroso) {
				System.out.println("YES");
			} else {
				System.out.println("NO");
			}
	
		}
	
	}
