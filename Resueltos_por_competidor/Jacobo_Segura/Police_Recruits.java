/* 
Codeforces 427A - Police Recruits
https://codeforces.com/problemset/problem/427/A
*/
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int pol = 0;
        int sa = 0;
        
        while(n-- > 0) {
        	int g = sc.nextInt();
        	if(g == -1) {
        		if(pol>0) {
        			pol--;
        		}else {
        			sa++;
        		}
        	}else {
        		pol += g;
        	}
        }
        System.out.println(sa);
    }
}
