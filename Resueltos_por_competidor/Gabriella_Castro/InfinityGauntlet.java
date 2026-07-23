/*
 * Autor: Gabriella Castro
 * Problema: Infinity Gauntlet
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-987A
 */

import java.util.HashMap;
import java.util.Scanner;

public class Main{
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		HashMap<String, String> gemas = new HashMap<>();
		
		gemas.put("purple", "Power");
		gemas.put("green", "Time");
		gemas.put("blue", "Space");
		gemas.put("orange", "Soul");
		gemas.put("red", "Reality");
		gemas.put("yellow", "Mind");
		
		int num = sc.nextInt();
		
		for(int i = 0; i < num; i++) {
			String color = sc.next();
			if(gemas.containsKey(color)) {
				gemas.remove(color);
			}
		}
		
		System.out.println(gemas.size());
	
		for (String gemaNombre : gemas.values()) {
			System.out.println(gemaNombre);
		}
		
	}

}
