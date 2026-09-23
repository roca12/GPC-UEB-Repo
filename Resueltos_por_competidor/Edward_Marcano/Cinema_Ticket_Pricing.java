
import java.util.Scanner;

public class exercise {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int dia = sc.nextInt();
		switch (dia) {
		case 1,2 ->			System.out.println(10);
		case 3 ->			System.out.println(5);
		case 4,5 ->			System.out.println(15);
		case 6,7 ->			System.out.println(20);
		default ->				System.out.println("no valido");
		//las flechas (->) hacen que no sea necesario un break en cada case

			
		}
		
	}

}
