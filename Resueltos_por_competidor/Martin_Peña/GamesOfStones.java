/*
* Autor: pgms1103-afk
* Problema: Game of Stones
* Juez Online: hacherrank
* Veredicto: Success
* URL: https://www.hackerrank.com/challenges/game-of-stones-1/problem
*/
import java.util.Scanner;

public class GamesOfStones {

	static Scanner sc = new Scanner(System.in);
	public static void main(String[] args) {
		
		int t = sc.nextInt();
		for (int i = 0; i < t; i++) {
			
			int n = sc.nextInt();
			boolean[] estados = new boolean [n+1];
			int[] jugadas = new int[3];
			jugadas[0] = 2;
			jugadas[1] = 3;
			jugadas[2] = 5;
			
			for (int j = 1; j <= n; j++) {
				for (int j2 = 0; j2 < jugadas.length; j2++) {
					int temp = j-jugadas[j2];
					if(temp < 0) {
						break;
					}
					if(!estados[temp]) {
						estados[j] = true;
						break;
					}
				}
			}
			if(estados[n]) {
				System.out.println("First");
			}else {
				System.out.println("Second");
			}
		}
		

	}

}
