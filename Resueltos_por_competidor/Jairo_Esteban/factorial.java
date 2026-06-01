import java.util.Scanner;

*/
 * Autor: [kjairoo]
 * Problema: [factorial inverso]
 * Juez online: [Kattis]
 * Veredicto: Accepted
*/

public class factorial {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {
		int nFac, n;
		n = 1;
		nFac = sc.nextInt();
		int i = 1;
		while (n != nFac) {
			n *= i;
			i++;
		}
		System.out.println(i - 1);
	}

}
