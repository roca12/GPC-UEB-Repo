import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class Main {
	/*
	 * Autor: mariana 
	 * Problema : A. Ada in Wonderland
	 * Juez online: CodeForces
	 * Veredicto: Accepted 
	 * URL: https://github.com/roca12/GPC-UEB-Repo/blob/main/Resueltos_por_competidor/Mariana_Pineda/Statements(en).pdf
	 */
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int x = Integer.parseInt(br.readLine());
		int y = Integer.parseInt(br.readLine());
		System.out.println(x * y);
	}
}
