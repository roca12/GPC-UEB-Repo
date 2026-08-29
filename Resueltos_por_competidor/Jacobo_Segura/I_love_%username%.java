/* 
Codeforces 155A - I_love_%username%
https://codeforces.com/problemset/problem/155/A
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int primero = sc.nextInt();
        int min = primero;
        int max = primero;
        int answer = 0;
      
        for (int i = 1; i < n; i++) {
            int puntos = sc.nextInt();
          
            if (puntos > max) {
                answer++;
                max = puntos;
            }
            if (puntos < min) {
                answer++;
                min = puntos;
            }
        }
        System.out.println(answer);
    }
}
