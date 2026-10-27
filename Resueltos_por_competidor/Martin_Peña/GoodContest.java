/*
* Autor: pgms1103-afk
* Problema: A. Good Contest
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/2266/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class GoodContest {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(br.readLine());
		for (int i = 0; i < t; i++) {
			int n = Integer.parseInt(br.readLine());
			String datos[] = br.readLine().split(" ");
			int a = Integer.parseInt(datos[0]);
			int b = Integer.parseInt(datos[1]);
			int c = Integer.parseInt(datos[2]);
			
			int primerMinimo = Math.min(a, b);
			int minimoDefinitivo = Math.min(primerMinimo, c);
			
			System.out.println(n - minimoDefinitivo);
		}

	}

}
