/* 
Codeforces 717387A - My cousin Earl
https://codeforces.com/gym/717387/problem/A
*/
import java.util.Scanner;

public class Main {
    static long gcd(long a, long b) {
        while (b != 0) {
            long temp = a % b;
            a = b;
            b = temp;
        }
        return a;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        long m = sc.nextLong();
        long t = sc.nextLong();
        long y = sc.nextLong();

        long capacidad = m;
        long restantes = n;
        long expansiones = 0;
        
        while (restantes > capacidad) {
        	restantes -= capacidad;
        	long aumento = gcd(capacidad, restantes);
            
        	capacidad += aumento;
            expansiones++;

            if (expansiones > y / t) {
                System.out.println("NO");
                return;
            }
        }

        System.out.println("YES");
    }
}
