/*
* Autor: pgms1103-afk
* Problema: A. Little Elephant and Rozdil
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/contest/205/problem/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LittleElephantAndRozdil {

	static BufferedReader br = new BufferedReader (new InputStreamReader(System.in)); 
	public static void main(String[] args) throws NumberFormatException, IOException {
			
		int numeroCiudades = Integer.parseInt(br.readLine());
		String[] datos = br.readLine().split(" "); 
		int[] nuevaCiudad = new int[numeroCiudades];
		for (int i = 0; i < numeroCiudades; i++) {
			nuevaCiudad[i] = Integer.parseInt(datos[i]);
		}
		
		int datoEnPosicion = Integer.MAX_VALUE;
		int min = 0;
		boolean seQueda = true;
		
		for (int i = 0; i < nuevaCiudad.length; i++) {
			if(nuevaCiudad[i] < datoEnPosicion) {
				min = i+1;
				datoEnPosicion = nuevaCiudad[i];
				seQueda = false;
			}else if(nuevaCiudad[i] == datoEnPosicion) {
				seQueda = true;
			}
		}
		
		if(seQueda) {
			System.out.println("Still Rozdil");
		}else {
			System.out.println(min);
		}
		
	}

}
