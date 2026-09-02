/* 
Codeforces 750A - New Year and Hurry
https://codeforces.com/problemset/problem/750/A
*/
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), k = sc.nextInt();
        int g = 240-k, cont = 0;
        for(int i = 1; i<=n; i++) {
        	g -= i*5;
        	if(g>=0) {
        		cont++;
        	}else {
        		break;
        	}
        }
        System.out.println(cont);
    }
}
