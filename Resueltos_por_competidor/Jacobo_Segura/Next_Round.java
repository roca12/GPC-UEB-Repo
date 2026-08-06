import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt(), k = sc.nextInt(), g = 0;
		for(int i = 0; i < n; i++) {
			int a = sc.nextInt();
			if(a>k) {
				g++;
			}
		}
		System.out.println(g);
	}
}
