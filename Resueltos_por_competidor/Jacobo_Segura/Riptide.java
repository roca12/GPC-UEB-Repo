import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-- > 0) {
			int[] x = new int[3];
			x[0] = sc.nextInt();
			x[1] = sc.nextInt();
			x[2] = sc.nextInt();
			int rounds = 0;
			
			while(x[0] != x[1] && x[0] != x[2] && x[1] != x[2]) {
				int max = 0, min = 0;
				for(int i = 1; i < 3; i++) {
					if (x[i] > x[max]) max = i;
					if (x[i] < x[min]) min = i;
				}
				x[max]--;
				x[min]++;
				rounds ++;
			}
			System.out.println(rounds);
		}
	}
}
