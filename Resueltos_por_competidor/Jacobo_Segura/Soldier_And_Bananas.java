/* 
Codeforces 546A - Soldier and Bananas
https://codeforces.com/problemset/problem/546/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long k = sc.nextLong(), n = sc.nextLong(), w = sc.nextLong();
		long total = k*w*(w + 1) / 2;
		long r = total - n;
		
		if(r < 0) r = 0;
		System.out.println(r);
	}
}
