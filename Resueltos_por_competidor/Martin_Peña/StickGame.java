/*
* Autor: pgms1103-afk
* Problema: Stick Game
* Juez Online: CSES
* Veredicto: ACCEPTED
* URL: https://cses.fi/problemset/task/1729
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class StickGame {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws IOException {
		
		String datos[] = br.readLine().split(" ");
		int numeroPalos = Integer.parseInt(datos[0]);
		int cantidadMovimientos = Integer.parseInt(datos[1]);
		
		String datos2[] = br.readLine().split(" ");
		int movimientosPosibles [] = new int[cantidadMovimientos];
		for (int i = 0; i < cantidadMovimientos; i++) {
			movimientosPosibles[i] = Integer.parseInt(datos2[i]);
		}
		
		boolean posicion[] = new boolean[numeroPalos+1];
		
		for (int i = 1; i <= numeroPalos; i++) {
			for (int j = 0; j < movimientosPosibles.length; j++) {
				int temp = i - movimientosPosibles[j];
				if(temp < 0) {
					continue;
				}
				if(!posicion[temp]) {
					posicion[i] = true;
					break;
				}
			}
		}
		
		StringBuilder respuesta = new StringBuilder();
		for (int i = 1; i < posicion.length; i++) {
			if(posicion[i]) {
				respuesta.append( "W");
			}else {
				respuesta.append("L");
			}
		}
		
		System.out.println(respuesta);
		
	}

}
