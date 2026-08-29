import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0) {
            int d = sc.nextInt(), y = sc.nextInt(), x = sc.nextInt();
            double g = 0;
            int cont = 0;
            
            while(cont <= x) {
                g = y * (100.0 - cont * d) / 100.0;
                if(x - cont >= g) {
                    System.out.println(cont);
                    break;
                } else if(cont == x) {
                    System.out.println(-1);
                }
                cont++;
            }
        }
    }
}
