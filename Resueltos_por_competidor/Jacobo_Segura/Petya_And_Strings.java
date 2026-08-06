import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String a = sc.next().toLowerCase();
		String b = sc.next().toLowerCase();
		int cmp = a.compareTo(b);
		
		if(cmp < 0) {
			System.out.println(-1);
		}else if(cmp > 0) {
			System.out.println(1);
		}else {
			System.out.println(0);
		}
	}
}
