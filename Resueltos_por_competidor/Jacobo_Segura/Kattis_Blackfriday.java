/* 
Vjudge Iterative, O(n²) - Kattis-blackfriday
https://vjudge.net/problem/Kattis-blackfriday
*/
import java.util.HashMap;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a = new int [n];
        for(int i = 0; i<n; i++) {
        	a[i] = sc.nextInt();
        }
        HashMap<Integer, Integer> frecuencia = new HashMap<>();
        for(int x: a) {
        	frecuencia.put(x, frecuencia.getOrDefault(x, 0)+1);
        }
        
        int menor = Integer.MAX_VALUE;
        int elemento = 0;
        
        for(int x: frecuencia.keySet()) {
        	if(frecuencia.get(x) == 1 && x>elemento) {
        		menor = frecuencia.get(x);
        		elemento = x;
        	}
        }
        if(elemento == 0) {
        	System.out.println("none");
        }else {
        	for(int i = 0; i<n; i++) {
        		if(a[i] == elemento) {
        			System.out.println(i + 1);
        			break;
        		}
        	}
        }
    }
}
