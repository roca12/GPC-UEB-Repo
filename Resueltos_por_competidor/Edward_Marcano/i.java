import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt(), t = sc.nextInt();
        int x = d-t;
        if(x > 0) {
        	System.out.println(x);
        }else {
        	System.out.println(0);
        }
    }
}
