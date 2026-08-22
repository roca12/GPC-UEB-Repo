/*
 *  Autor: Jean Paul
 * Problema: A - Alarm Clock
 * Juez online: vjudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/contest/841803#problem/A
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class AlarmMain {
	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	public static void main(String[] args) throws IOException {
		while(true) {
			String hours = br.readLine();
			if(hours.equals("0 0 0 0"))
				break;
			
			int h1 = (Integer.parseInt(hours.split("\\ ")[0])*60)+ Integer.parseInt(hours.split("\\ ")[1]);
			int h2 = (Integer.parseInt(hours.split("\\ ")[2])*60) + Integer.parseInt(hours.split("\\ ")[3]);
			
			if(h1 <= h2) {
				System.out.println(h2-h1);
			} else {
				System.out.println(1440-h1+h2);
			}
		}
	}
}
