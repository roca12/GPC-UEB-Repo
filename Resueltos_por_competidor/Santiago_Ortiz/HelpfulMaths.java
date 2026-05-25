import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
 
/*
 * Autor: Darkovski7   
 * Problema: Helpful Maths
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/339/A
 */

public class HelpfulMaths {
 
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
 
		ArrayList<Integer> lista = new ArrayList<Integer>();
 
		while (sc.hasNext()) {
			String linea = sc.next();
 
			for (int i = 0; i < linea.length(); i++) {
				char c = linea.charAt(i);
				if (Character.isDigit(c)) {
					lista.add(Character.getNumericValue(c));
				}
			}
			Collections.sort(lista);
			for (int i = 0; i < lista.size(); i++) {
				if ((i+1) < lista.size()) {
					System.out.print(lista.get(i) + "+");
				} else {
					System.out.print(lista.get(i));
				}
			}
		}
 
	}
 
}
