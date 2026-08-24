/* 
Codeforces 1335A - Candies and Two Sisters
https://codeforces.com/problemset/problem/1335/A
*/
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    	StringBuilder sb = new StringBuilder();
        int t = Integer.parseInt(br.readLine().trim());
        int b = 0;
        while(t-->0) {
        	int n = Integer.parseInt(br.readLine().trim());
        	sb.append((n-1)/2).append("\n");
        }
        System.out.println(sb);
    }
}
