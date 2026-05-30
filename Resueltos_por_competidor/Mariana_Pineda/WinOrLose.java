import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : G. Win or Lose?
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/Statements(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		long n = Long.parseLong(br.readLine());
		if (n % 3 == 0) {
			System.out.println("PERDE");
		} else {
			System.out.println("GANHA");
		}
	}
}
