/* 
Codeforces 228A - Is your horseshoe on the other hoof?
https://codeforces.com/problemset/problem/228/A
*/
import java.util.HashSet;
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		HashSet<Integer> set = new HashSet<>();
		for(int i = 0; i<4; i++) {
			int g = sc.nextInt();
			set.add(g);
		}
		System.out.println(4-set.size());
	}
}
