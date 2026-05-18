import java.util.Scanner;

public class Posters {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		long P = sc.nextLong();
		long H = sc.nextLong();
		long T = sc.nextLong();
		
		if(P+H > T) {
			System.out.println(0);
		}else {
			long result = 1 + (T-(P+H))/Math.max(P, H);
			System.out.println(result);
		}
	}

}
