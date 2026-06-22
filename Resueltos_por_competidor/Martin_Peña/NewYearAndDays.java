/*
* Autor: pgms1103-afk
* Problema: 611A - New Year and Days
* Juez Online: Codeforces
* Veredicto: Accepted
* URL: https://codeforces.com/problemset/problem/611/A
*/

import java.util.Scanner;

public class NewYearAndDays {

	static Scanner sc = new Scanner(System.in);

	public static void main(String[] args) {

		String formato = sc.nextLine();
		String formatoNumString = formato.split(" ")[0];
		int formatoNum = Integer.parseInt(formatoNumString);

		if (formato.endsWith("k")) {
			if (formatoNum == 5 || formatoNum == 6) {
				System.out.println("53");
			} else {
				System.out.println("52");
			}
		} else if (formato.endsWith("h") && formatoNum == 31) {
			System.out.println("7");
		} else if (formato.endsWith("h") && formatoNum <= 29) {
			System.out.println("12");
		} else if (formato.endsWith("h") && formatoNum > 29) {
			System.out.println("11");
		}

	}

}
