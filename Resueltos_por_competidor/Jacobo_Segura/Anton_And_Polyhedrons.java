/* 
Codeforces 785A - Anton and Polyhedrons
https://codeforces.com/problemset/problem/785/A
*/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int r = 0;
		for(int i = 0; i<n; i++) {
			String f = sc.next();
			if(f.equals("Icosahedron")) {
				r+=20;
			}else if(f.equals("Dodecahedron")) {
				r+=12;
			}else if(f.equals("Octahedron")) {
				r+=8;
			}else if(f.equals("Cube")) {
				r+=6;
			}else if(f.equals("Tetrahedron")) {
				r+=4;
			}
		}
		System.out.println(r);
	}
}
