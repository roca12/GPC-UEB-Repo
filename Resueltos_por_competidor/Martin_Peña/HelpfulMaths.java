/*
* Autor: pgms1103-afk
* Problema: A. Helpful Maths
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/339/A
*/
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class HelpfulMaths {

	static Scanner sc = new Scanner (System.in);
	//static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws IOException {
		
		String s = sc.next();
		int[] numeros = new int[s.length()];
	
		for (int i = 0; i < s.length(); i++) {
			if(s.charAt(i) != '+') {
				numeros[i] = Character.getNumericValue(s.charAt(i));
			}
		}
		
		if(numeros.length == 1) {
			System.out.println(numeros[0]);
		}else {
			Arrays.sort(numeros);
			for (int i = 0; i < numeros.length; i++) {
				if(numeros[i] != 0 && i != s.length()-1 ) {
					System.out.print(numeros[i] + "+");
				}else if(numeros[i] != 0) {
					System.out.print(numeros[i]);
				}
				
			}
		}
		
		
	}

}
