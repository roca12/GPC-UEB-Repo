/* 
Codeforces 271A - Beautiful Year
https://codeforces.com/problemset/problem/271/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int g = sc.nextInt();
		
		while(true) {
			g++;
			
			int a = g/1000;
			int b = (g/100) % 10;
			int c = (g/10) % 10;
			int d = g % 10;
			
			if(a != b && a != c && a != d &&
				b != c && b != d &&
				c != d) {
				System.out.println(g);
				break;
			}
		}
	}
}
