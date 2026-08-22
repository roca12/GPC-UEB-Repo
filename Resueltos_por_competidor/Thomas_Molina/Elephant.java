import java.util.Scanner;

public class Elephant {

	public static void main(String[] args) {
		Scanner sc = new Scanner (System.in);
		int x = sc.nextInt();
		int e = 0;
		
			while(x>0) {
			if (x>=5) {
				x = x-5;
				e++;
			}
            else if (x==4) {
				x=x-1;
				e++;
                break;
			}
			else if (x==3) {
				x=x-1;
				e++;
                break;
			}
			else if (x==2) {
				x=x-1;
				e++;
                break;
			}
			else if (x==1) {
				x=x-1;
				e++;
                break;
			}
		}
		System.out.println(e);

	}

}