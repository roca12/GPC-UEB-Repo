/* 
Codeforces 996A - Hit the Lottery
https://codeforces.com/problemset/problem/996/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int d = n/100;
		int r = n%100;
		d += r/20;
		r = r%20;
		d += r/10;
		r = r%10;
		d += r/5;
		r = r%5;
		d += r;
		System.out.println(d);
	}
}
