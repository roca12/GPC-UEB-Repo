/*
* Autor: pgms1103-afk
* Problema: A. Road To Zero
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/1342/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class RoadToZero {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		int t = Integer.parseInt(br.readLine());
		for (int i = 0; i < t; i++) {
			
			String datos[] = br.readLine().split(" ");
			int x = Integer.parseInt(datos[0]);
			int y = Integer.parseInt(datos[1]);
			
			String datos2[] = br.readLine().split(" ");
			long a = Long.parseLong(datos2[0]);
			long b = Long.parseLong(datos2[1]);
			
			
			long max = Math.max(x, y);
			long min = Math.min(x, y);
			
			long respuesta1 = (max+min) * a;
			long respuesta2 = (max - min) * a + min*b;
					
//			while(max != 0 && min != 0) {
//				respuesta += b;
//				max--;
//				min--;
//			}
			System.out.println(Math.min(respuesta1, respuesta2));
			
		}

	}

}
