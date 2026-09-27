import java.util.Scanner;

public class CorrenAnswer {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int t = sc.nextInt();
		
		
		for (int i = 0; i < t; i++) {
			
			int number = sc.nextInt();
			
			
			
			String result = ((((((number*567)/9)+7492)*235)/47)-498) + "";
			System.out.println(result.charAt((result.length()-2%10)));
			
			
			
		}
		
		
		
		
	}

}
