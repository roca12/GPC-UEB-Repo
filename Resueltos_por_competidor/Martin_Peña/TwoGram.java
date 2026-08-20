/*
* Autor: pgms1103-afk
* Problema: B. Two-gram
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/contest/977/problem/B
*/
import java.util.HashMap;
import java.util.Scanner;

public class TwoGram {
	static Scanner sc = new Scanner (System.in);
	public static void main(String[] args) {
		
		sc.nextInt();
		String s = sc.next();
		
		HashMap <String, Integer> subStrings = new HashMap<>();
		int mayor = 0;
		for (int i = 0; i < s.length()-1; i++) {
			subStrings.merge(""+s.charAt(i) + s.charAt(i+1), 1, Integer::sum);
		}
		
		Integer[] valores = new Integer[subStrings.size()];
		subStrings.values().toArray(valores);
	
		for (int i = 0; i < subStrings.size(); i++) {
			if(valores[i] > mayor) {
				mayor = valores[i];
			}
		}
		
		for(String key: subStrings.keySet()) {
			if(subStrings.get(key) == mayor) {
				System.out.println(key);
				break;
			}
		}
		
		
		
		
		
		
	}

}
