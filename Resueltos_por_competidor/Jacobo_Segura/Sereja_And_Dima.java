/* 
Codeforces 381A - Sereja and Dima
https://codeforces.com/problemset/problem/381/A
*/
import java.util.ArrayList;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> g = new ArrayList<>();
        for(int i = 0; i<n; i++) {
        	g.add(sc.nextInt());
        }
        int s = 0;
        int d = 0;
        for(int i = 0; i<n; i++) {
        	if(i%2 == 0) {
        		if(g.get(0) > g.get(g.size() - 1)) {
            		s += g.get(0);
            		g.remove(0);
            	}else {
            		s += g.get(g.size() - 1);
            		g.remove(g.size() - 1);
            	}
        	}else {
        		if(g.get(0) > g.get(g.size() - 1)) {
            		d += g.get(0);
            		g.remove(0);
            	}else {
            		d += g.get(g.size() - 1);
            		g.remove(g.size() - 1);
            	}
        	}
        }
        System.out.println(s + " " + d);
    }
}
