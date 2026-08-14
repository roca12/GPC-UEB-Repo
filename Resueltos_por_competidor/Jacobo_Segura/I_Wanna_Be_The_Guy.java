/* 
Codeforces 469A - I Wanna Be the Guy
https://codeforces.com/problemset/problem/469/A
*/
import java.util.HashSet;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashSet<Integer>set = new HashSet();
		int n = sc.nextInt();
		
		int x = sc.nextInt();
		for(int i = 0; i < x; i++) {
			set.add(sc.nextInt());
		}
		int y = sc.nextInt();
		for(int i = 0; i < y; i++) {
			set.add(sc.nextInt());
		}
		
		if(set.size()==n) {
			System.out.println("I become the guy.");
		}else {
			System.out.println("Oh, my keyboard");
		}
	}
}
