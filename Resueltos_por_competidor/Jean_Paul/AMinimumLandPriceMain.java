/*
 * Autor: Jean Paul
 * Problema: A minimum land price
 * Juez online: Vjudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/contest/845664#problem/L
 */

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class AMinimumLandPriceMain {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int t = sc.nextInt();
		for(int i = 0; i < t; i++) {
			ArrayList<Integer> lands = new ArrayList<Integer>();
			int index = 0;
			while(true) {
				int li = sc.nextInt();
				
				if(li == 0) {
					int [] a = new int[index];
					for(int j = 0; j < index;j++) {
						a[j] = lands.get(j);
					}
					
					Arrays.sort(a);
					si(a);
					
					break;
				}
				
				index++;
				lands.add(li);
			}
		}
	}
	
	static void si(int []a) {
		long amount = 0;
		for(int i = 0; i < a.length; i++) {
			long value = (long) (2*(Math.pow(a[a.length-i-1],i+1)));
			
			amount+=value;
			
			if(amount > 5000000) {
				System.out.println("Too expensive");
				return;
			}
		}
		
		System.out.println(amount);
	}
}
