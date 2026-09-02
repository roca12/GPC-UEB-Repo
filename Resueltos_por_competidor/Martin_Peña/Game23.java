/*
* Autor: pgms1103-afk
* Problema: A. Game 23
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1141/A	
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Game23 {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws IOException {

		String datos[] = br.readLine().split(" ");
		long numeroPrincipio = Integer.parseInt(datos[0]);
		long numeroFinal = Integer.parseInt(datos[1]);

		if(numeroFinal % numeroPrincipio != 0) {
			System.out.println(-1);
			return;
		}
		long resultado = numeroFinal/numeroPrincipio;
		//System.out.println(resultado);
		long tres = 0;
		long dos = 0;
		
		while(resultado % 3 == 0) {
			tres++;
			resultado /= 3;
			//System.out.println(resultado);
		}
		while(resultado % 2 == 0) {
			dos++;
			resultado /= 2;
			//System.out.println(resultado);
		}
		
		if(resultado == 1) {
			System.out.println(dos+tres);
		}else {
			System.out.println(-1);
		}
	}

}
