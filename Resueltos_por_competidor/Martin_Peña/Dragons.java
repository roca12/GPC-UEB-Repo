/*
* Autor: pgms1103-afk
* Problema: A. Dragons
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/230/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class Dragons {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	public static void main(String[] args) throws NumberFormatException, IOException {

		String[] datos = br.readLine().split(" ");
		int s = Integer.parseInt(datos[0]);
		int n = Integer.parseInt(datos[1]);

		ArrayList<Integer> fuerzaDragon = new ArrayList<>();
		ArrayList<Integer> bonus = new ArrayList<>();
		for (int i = 0; i < n; i++) {
			String[] datos2 = br.readLine().split(" ");
			fuerzaDragon.add(Integer.parseInt(datos2[0]));
			bonus.add(Integer.parseInt(datos2[1]));
		}
		
		boolean bandera = true;
		while(bandera) {
			for (int i = 0; i < fuerzaDragon.size(); i++) {
				if(s > fuerzaDragon.get(i)) {
					s = s + bonus.get(i);
					fuerzaDragon.remove(i);
					bonus.remove(i);
					i--;
				}
			}
			if (fuerzaDragon.size() == 0) {
				break;
			}else {
				for (int j = 0; j < fuerzaDragon.size(); j++) {
					if(s > fuerzaDragon.get(j) && fuerzaDragon.size() != 0) {
						bandera = true;
						break;
					}else {
						bandera = false;
					}
				}
			}
			
		}
		if(fuerzaDragon.size() == 0) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}

	}
}
