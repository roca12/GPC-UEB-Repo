import java.util.Scanner;

/*
 * Autor: Darkovski7   
 * Problema: Young Physicist
 * Juez Online: Codeforces
 * Veredicto: Accepted 
 * Url: https://codeforces.com/problemset/problem/69/A
 */

public class YoungPhysicist {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n = sc.nextInt();
		int sumaX = 0;
		int sumaY = 0;
		int sumaZ = 0;

		for (int i = 0; i < n; i++) {
			sumaX += sc.nextInt();
			sumaY += sc.nextInt();
			sumaZ += sc.nextInt();

		}

		if (sumaX == 0 && sumaY == 0 && sumaZ == 0) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}

}
