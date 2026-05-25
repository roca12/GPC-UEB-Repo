import java.util.Scanner;

public class TableroTravieso {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		String number = sc.next();
		int k = 0;
		for(int i = 0; i < number.length(); i++)
		{
			char c = number.charAt(i);
			
			if(c == '0' || c == '6' || c == '9') k += 6;
			else if(c == '1') k += 2;
			else if(c == '2'|| c == '3' || c == '5') k += 5;
			else if(c == '4') k += 4;
			else if(c == '7') k += 3;
			else if(c == '8') k += 7;
			
		}
		StringBuilder sb = new StringBuilder();
		
		for(int c = number.length(); c > 0; c--)
		{
			if(k == 4 && c==1)
			{
				sb.append('4');
				k -= 4;
			}
			else if(k == 5 && c==1)
			{
				sb.append('5');
				k -= 5;
			}
			else if(k == 7*c)
			{
				sb.append('8');
				k -= 7;
			}
			else if(k >= (2*c + 4) )
			{
				sb.append('9');
				k -= 6;
			}
			else if(k > (2*c))
			{
				sb.append('7');
				k -= 3;
			}
			else
			{
				sb.append('1');
				k -= 2;
			}
		}
		
		System.out.println(sb.toString());
	}

}