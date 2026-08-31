/* 
Codeforces 1144A - Diverse Strings
https://codeforces.com/problemset/problem/1144/A
*/
import java.util.HashSet;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        while(n-- > 0) {
        	HashSet<Character> set = new HashSet<>();
        	String s = sc.next();
        	for(int i = 0; i<s.length(); i++) {
        		set.add(s.charAt(i));
        	}
        	if(set.size() != s.length()) {
        		System.out.println("No");
        	}else {
        		char anterior = 0;
        		boolean correcto = true;
        		for(char letra = 'a'; letra <= 'z'; letra++){
        			if(set.contains(letra)) {
        				if(anterior != 0 && letra - anterior != 1) {
        					correcto = false;
        					break;
        				}
        				anterior = letra;
        				}
        			}
        		if(correcto == false) {
        			System.out.println("No");
        		}else {
        			System.out.println("Yes");
        		}
        	}
        }
    }
}
