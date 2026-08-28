/* 
Codeforces 151A - Soft Drinking
https://codeforces.com/problemset/problem/151/A
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt(), 
        		l = sc.nextInt(), c = sc.nextInt(), 
        		d = sc.nextInt(), p = sc.nextInt(),
        		nl = sc.nextInt(), np=sc.nextInt();
        
        int g = Math.min(((k*l)/nl), (c*d));
        g = Math.min(g, (p/np));
        g = g/n;
        
        System.out.println(g);
    }
}
