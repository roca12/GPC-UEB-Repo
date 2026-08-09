/*
* Autor: pgms1103-afk
* Problema: A. Wrong Subtraction
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/977/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class WrongSubtraction {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {

		String[] datos = br.readLine().split(" ");
		String n = datos[0];
		int k = Integer.parseInt(datos[1]);

		int nNumero = Integer.parseInt(n);

		char ultimoCaracter = 'a';

		while (k != 0) {
			if (n.length() == 1) {
				ultimoCaracter = n.charAt(0);
			} else {
				for (int i = 0; i < n.length() - 1; i++) {
					{
						ultimoCaracter = n.charAt(i + 1);
					}

				}
			}

			if (ultimoCaracter == '0') {
				nNumero = nNumero / 10;
				n = String.valueOf(nNumero);
			} else {
				nNumero = nNumero - 1;
				n = String.valueOf(nNumero);
			}

			k--;
		}

		System.out.println(nNumero);

	}

}
