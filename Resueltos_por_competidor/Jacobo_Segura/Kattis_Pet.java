/* 
Vjudge Iterative, O(n²) - Kattis-pet
https://vjudge.net/problem/Kattis-pet
*/
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] n = new int[5][4];
        
        for(int i = 0; i<5; i++) {
        	for(int j = 0; j<4; j++) {
        		n[i][j] = sc.nextInt();
        	}
        }
        int maxFila = 0;
        int Fila = 0;
        for(int i = 0; i<5; i++) {
        	int sumaFilas = 0;
        	for(int j = 0; j<4; j++) {
        		sumaFilas += n[i][j];
        		if(sumaFilas > maxFila) {
        			Fila = i+1;
        			maxFila = sumaFilas;
        		}
        	}
        }
        System.out.println(Fila+" "+maxFila);
    }
}
