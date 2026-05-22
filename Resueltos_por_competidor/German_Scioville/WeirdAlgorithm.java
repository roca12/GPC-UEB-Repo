/*
 * Autor: Scioville
 * Problema: Weird Algorithm (https://cses.fi/problemset/task/1068)
 * Juez online: CSES
 * Veredicto: accepted  
 * Only a man can kill a monster
 * */
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class WeirdAlgorithm {


	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		long n = Long.parseLong(br.readLine());
		
			while(n!=1) {
				System.out.println(n);
				if(n%2==0) {
					n=n/2;
				}else {
					n = (n*3)+1;
				}
				
			}
		
			if(n==1) {
				System.out.println(1);
			}
		
		
	}
}