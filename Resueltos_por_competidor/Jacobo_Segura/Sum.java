/* 
Codeforces 1742A - Sum
https://codeforces.com/problemset/problem/1742/A
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0) {
        	int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        	if(a+b == c || a+c == b || c+b == a) {
        		System.out.println("YES");
        	}else {
        		System.out.println("NO");
        	}
        }
    }
}
