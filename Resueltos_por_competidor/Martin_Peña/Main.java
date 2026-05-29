/*
* Autor: pgms1103-afk
* Problema: 4A - Watermelon
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/4/A
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {

		int w = Integer.parseInt(br.readLine());

		if (w<=2){
			System.out.println("NO");
		}
		else if (w % 2 == 0) {
			System.out.print("YES");
		} else {
			System.out.print("NO");
		}

	}

}
