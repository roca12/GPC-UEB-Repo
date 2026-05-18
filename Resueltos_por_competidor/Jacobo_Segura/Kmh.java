import java.util.Scanner;

public class Kmh {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int mayorLimite = 0;

		for (int i = 0; i < n; i++) {
			String signo = sc.next();
			if (signo.equals("/")) {
				int nacional = ((mayorLimite / 10) + 1) * 10;
				System.out.println(nacional);
			} else {
				int limite = Integer.parseInt(signo);
				System.out.println(limite);

				if (limite > mayorLimite) {
					mayorLimite = limite;
				}
			}
		}
	}
}
