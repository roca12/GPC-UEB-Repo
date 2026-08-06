import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int f = 0, c = 0;
		
		for(int i = 0; i < 5; i++) {
			for(int j = 0; j < 5; j++) {
				int x = sc.nextInt();
				if(x == 1) {
					f = i;
					c = j;
				}
			}
		}
		System.out.println(Math.abs(f-3) + Math.abs(c-3));
	}
}
