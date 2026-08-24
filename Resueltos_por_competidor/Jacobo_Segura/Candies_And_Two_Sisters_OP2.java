/* 
Codeforces 1335A - Candies and Two Sisters
https://codeforces.com/problemset/problem/1335/A
*/
import java.util.Scanner;;

public class Main {
    public static void main(String[] args) {
    	Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int b = 0;
        while(t-->0) {
        	int n = sc.nextInt();
        	b = (n-1)/2;
        	System.out.println(b);
        }
    }
}
