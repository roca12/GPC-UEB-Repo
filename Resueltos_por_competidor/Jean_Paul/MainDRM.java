/*
 *  Autor: Jean Paul
 * Problema: DRM Messages
 * Juez online: Kattisdrmmessages
 * Veredicto: Accepted
 * URL: https://open.kattis.com/problems/drmmessages
 */


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MainDRM {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
			int sum1 = 0;
			int sum2 = 0;
			String drm = br.readLine();
			String sub1 = drm.substring(0,(drm.length()/2));
			String sub2 = drm.substring((drm.length()/2), drm.length());
			char[] chars = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
			int[] pos1 = new int[sub1.length()];
			int[] pos2 = new int[sub2.length()];
			String sub11 = "";
			String sub22 = "";
			for(int i = 0; i < sub1.length(); i++) {
				for(int j = 0; j < chars.length; j++) {
					if(sub1.charAt(i) == chars[j]) {
						sum1+=j;
						pos1[i] = j;
						if(sum1 > 25) {
							sum1 -= 26;
						}
					}
					
					if(sub2.charAt(i) == chars[j]) {
						sum2+=j;
						pos2[i] = j;
						if(sum2 > 25) {
							sum2 -= 26;
						}
					}
				}
			}
			for(int i = 0; i < sub1.length(); i++) {
				int current1 = pos1[i] + sum1;
				int current2 = pos2[i] + sum2;
				if(current1 > 25) {
					current1 -= 26;
				}
				if(current2 >25) {
					current2 -= 26;
				}
				sub11+=chars[current1];
				pos1[i] = current1;
				sub22+=chars[current2];
				pos2[i] = current2;
			}
			String final1 = "";
			for(int i = 0; i < sub1.length(); i++) {
				int current = 0;
				current = pos1[i]+pos2[i];
				if(current > 25) {
					current -= 26;
				}
				final1+=chars[current];
			}
			System.out.println(final1);
	}
}