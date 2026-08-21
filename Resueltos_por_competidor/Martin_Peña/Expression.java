/*
* Autor: pgms1103-afk
* Problema: A. Expression
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/479/A
*/
import java.util.Scanner;

public class Expression {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();

		int operacion1 = a + b * c;
		int operacion2 = a * (b + c);
		int operacion3 = a * b * c;
		int operacion4 = (a + b) * c;
		int operacion5 = a + b + c;
		
		int mayor1 = Math.max(operacion1, operacion2);
		int mayor2 = Math.max(operacion3, operacion4);
		int mayor3 = Math.max(mayor1, mayor2);
		System.out.println(Math.max(mayor3, operacion5));
	}

}
