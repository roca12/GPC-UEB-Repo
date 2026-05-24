/*
 * Autor: Gabriella Castro
 * Problema: Ada in Wonderland
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/group/hRSGIe7nvK/contest/693848/problem/A
 */


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
 
public class A {
 
	public static void main(String[] args)throws IOException {
		
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String l = br.readLine();
		String j = br.readLine();
		
		
		
		int n = Integer.parseInt(l.trim());
		int m = Integer.parseInt(j.trim());
		
		System.out.println(n*m);
 
	}
 
}
