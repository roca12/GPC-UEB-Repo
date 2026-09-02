import java.util.Scanner;
public class Theatre_Square {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner (System.in);
		int n,m,a,ancho,largo;
n = sc.nextInt();
m = sc.nextInt();
a = sc.nextInt();
 
largo =(n + a - 1)/a;//redondear los decimales hacia arriba
ancho =(m + a - 1)/a;
System.out.println(largo*ancho);


	}

}
