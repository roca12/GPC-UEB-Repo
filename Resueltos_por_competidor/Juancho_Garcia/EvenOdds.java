import java.util.Scanner;

public class EvenOdds {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		long n = sc.nextLong();
		long k = sc.nextLong();

		long mitad = (n + 1) / 2;

		long resultado;
		if (k <= mitad) {
			resultado = 2 * k - 1;
		} else {
			resultado = 2 * (k - mitad);
		}

		System.out.println(resultado);
	}

}
