/*
 * Autor: Scioville
 * Problema: Repetitions (https://cses.fi/problemset/task/1069)
 * Juez online: CSES
 * Veredicto: accepted  
 * hells gate arrested and shine heaven now
 * */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Repetitions {


	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String cadena = br.readLine();
		int a,aux;
		
		a =1;

		aux = 1;
		
		
		for(int i = 0; i < cadena.length() - 1; i++) {
		    if(cadena.charAt(i) == cadena.charAt(i+1)) {
		        a++;
		    } else {
		        aux = Math.max(aux, a);
		        a = 1;
		    }
		}
		
		aux = Math.max(aux, a);
		System.out.println(aux);
		
		
	}
}