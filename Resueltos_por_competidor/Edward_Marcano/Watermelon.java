import java.util.Scanner;
public class Main {

	public static void main(String[] args) {
	    Scanner sc = new Scanner (System.in);
	    int t,w;
	    w =sc.nextInt();

	    if (w > 2  && w % 2 == 0) {
	    	System.out.println("YES");
	    }else {
	    	System.out.println("No");
	    }
}

	
}
