import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		int resueltos = 0;
		int [] n = new int [3];
		while (t-- > 0 ) {
		n [0] = sc.nextInt();
		n [1] = sc.nextInt();
		n [2] = sc.nextInt();
		
		int suma = n[0]+n[1]+n[2];
		if(suma >= 2) {
			resueltos++;
		}
		}
		System.out.println(resueltos);
	}

}
