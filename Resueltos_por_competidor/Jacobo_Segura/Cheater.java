import java.util.Scanner;

public class Cheater {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        for(int i = 0; i<n; i++) {
        	String s = sc.next();
        	int valor = Integer.parseInt(s.replace(".", ""));
        	if(valor%3 == 2) {
        		System.out.println("IMPOSSIBLE");
        	}else {
        		System.out.println("VALID");
        	}
        }
    }
}
