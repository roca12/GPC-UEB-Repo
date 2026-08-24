/* 
Codeforces 268A - Games
https://codeforces.com/problemset/problem/268/A
*/
import java.util.Scanner;;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] h = new int[n];
        int[] g = new int[n];
        
        for(int i = 0; i<n; i++) {
        	h[i] = sc.nextInt();
        	g[i] = sc.nextInt();
        }
        
        int cont = 0;
        for(int i = 0; i<n; i++) {
        	for(int j = 0; j<n; j++) {
        		if(i != j && h[i] == g[j]) {
        			cont++;
        		}
        	}
        }
        System.out.println(cont);
    }
}
