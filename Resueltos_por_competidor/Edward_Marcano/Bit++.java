import java.util.Scanner;
public class Bit_282A {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);

		int x = 0, t = sc.nextInt();
		// TODO Auto-generated method stub
		while(t  -- > 0) {
			String todo = sc.next();
			if (todo.contains("+")) {
				x++;
			}else {
				x--;
			}
		}
		System.out.println(x);
	}

}
