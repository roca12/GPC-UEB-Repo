
/*
 * Autor: OtherSpanish
 * Problema: Snakey
 * Juez online: CodeForces
 * Veredicto: Accepted
 * https://codeforces.com/idk
 */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class Snakey {
	
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);
		StringTokenizer st = new StringTokenizer(br.readLine());
		int r = Integer.parseInt(st.nextToken()), c = Integer.parseInt(st.nextToken());
		char[][] content = new char[r][c];
		for (int i = 0; i < r; i++) {
			String lin = br.readLine();
			for (int j = 0; j < c; j++) {
				content[i][j] = lin.charAt(j);
			}
		}
		StringBuilder sb = new StringBuilder();
		for (int j = 0; j < c; j++) {
		    for (int i = 0; i < r; i++) {
		        if(content[i][j] != '.') sb.append(content[i][j]);
		    }
		}
		pw.println(sb);
		pw.flush();

		
	}
	
}
