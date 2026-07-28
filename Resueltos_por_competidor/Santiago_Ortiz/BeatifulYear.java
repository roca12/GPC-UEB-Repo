import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Beatiful Year
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/271/A
 */

public class BeatifulYear {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);
		
		int year = sc.nextInt();
		
		boolean distinctdigits = true;
		
		while (distinctdigits) {
			year = year + 1;
			String year2 = Integer.toString(year);
				char c = year2.charAt(0); 
				char c2 = year2.charAt(1);
				char c3 = year2.charAt(2);
				char c4 = year2.charAt(3);
				if(c != c2 && c != c3 && c!= c4 && c2 != c3 && c2!= c4 && c3 != c4) {
					int resultado = Integer.parseInt(year2);
					System.out.println(resultado);
					distinctdigits = false;					
				}else {
					distinctdigits = true;
				}
			
		}
	}

}
