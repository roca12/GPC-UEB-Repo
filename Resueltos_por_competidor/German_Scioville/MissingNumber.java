/*
 * Autor: Scioville
 * Problema: Missing Number (https://cses.fi/problemset/task/1083)
 * Juez online: CSES
 * Veredicto: accepted  
 * Jesus Christ is in Heaven Now
 * */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;

public class MissingNumber {


	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		
		String [] lista = br.readLine().split(" ");
		
		int[] numeros = new int[lista.length];
		for(int i = 0;i<n-1;i++) {
			numeros[i] = Integer.parseInt(lista[i]);
		}
		
		Arrays.sort(numeros);
		
		int aux=1;
		for(int i = 0;i<n-1;i++) {
			if(aux != numeros[i]) {
				System.out.println(aux);
				return;
			}
			
			aux++;
		}
		
		System.out.println(aux);
		
	}
}