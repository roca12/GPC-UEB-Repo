/*
* Autor: pgms1103-afk
* Problema: A. String Task
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/118/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StringTask {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {

		StringBuilder s = new StringBuilder(br.readLine());
		StringBuilder nuevo = new StringBuilder();
		char[] vocales = new char[6];
		vocales[0] = 'a';
		vocales[1] = 'e';
		vocales[2] = 'i';
		vocales[3] = 'o';
		vocales[4] = 'u';
		vocales[5] = 'y';

		for (int i = s.length(); i > 0; i--) {
			for (int j = 0; j < vocales.length; j++) {
				if (s.toString().toLowerCase().charAt(i - 1) == vocales[j]) {
					s.deleteCharAt(i - 1);
					break;
				}
			}
		}

		for (int i = 0; i < s.length(); i++) {
			nuevo.append('.');
			nuevo.append(s.toString().toLowerCase().charAt(i));
		}

		System.out.println(nuevo);
	}

}
