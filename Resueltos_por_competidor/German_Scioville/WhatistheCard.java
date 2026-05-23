/*
 * Autor: Scioville
 * Problema: What is the Card? (https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1587)
 * Juez online: CSES
 * Veredicto: accepted  
 * Gentlemen, I love war, Gentlemen, I... love war, Gentlemen. I... SO LOVE WAR.
 * */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;

public class whatistheCard {


	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		int t,aux,x,y; 
		
		String carta;
		
		ArrayList <String> baraja = new ArrayList <>();
		
		String[] cards = new String[52]; 
		
		t = Integer.parseInt(br.readLine());
		aux = 0;
		while(t>0) {
			x =0;
			y =0;
			aux++;
			cards = br.readLine().split(" ");
			
			
			
			for(int i = 0;i<cards.length;i++) {
				baraja.add(cards[i]) ;
			}
			
			
			for(int i = 0;i<3;i++) {
				carta = baraja.get(0);
				if(carta.substring(0,1).equals("A")||carta.substring(0,1).equals("K")||carta.substring(0,1).equals("Q")||carta.substring(0,1).equals("J")||carta.substring(0,1).equals("T")) {
					x = 10;
				}else {
					x = Integer.parseInt(carta.substring(0,1));
				}
				
				y +=x;
				if((10-x)>0) {
					for(int j = 0;j<11-x;j++) {
						baraja.remove(0);
					}
				}else {
					baraja.remove(0);
				}
				
				
			}
			
			System.out.println("Case "+aux+": "+baraja.get(y-1));
			baraja.clear();
			t--;
		}
		
		
	}
}