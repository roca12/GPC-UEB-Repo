/*
* Autor: pgms1103-afk
* Problema: A. Calculating Function
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/486/A
*/
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class CalculatingFunction {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws NumberFormatException, IOException {
		
		long n =  Long.parseLong(br.readLine());
		
		if(n % 2 != 0) {
			n = (n+1)/2;
			System.out.println("-"+n);
		}else {
			n = n/2;
			System.out.println(n);
		}
		
		

	}

}
