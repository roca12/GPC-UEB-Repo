import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	/*
	 * Autor: mariana 
	 * Problema : C. Strengthening Passwords
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/statementsWarmUp(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String linea;
		int n = Integer.parseInt(br.readLine());
		while (n-- > 0) {
			boolean a = true;
			linea = br.readLine();
			boolean letra = false;
			if (linea.length() <= 10) {
				a = false;
			}
			if (linea.charAt(0) > 57) {
				a = false;
			}
			for (int i = 1; i < linea.length(); i++) {
				if (a == false) {
					break;
				} else if (linea.charAt(i) >= linea.charAt(i - 1)) {
					if (linea.charAt(i) > 57) {
						letra = true;
					}
				} else {
					a = false;
				}
			}
			if (letra == true) {
				System.out.println(a ? "S" : "N");
			} else {
				System.out.println("N");
			}
		}
	}
}
