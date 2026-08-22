/*
 *  Autor: Jean Paul
 * Problema: A. Circle of Students
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1203/A
 */

import java.util.Scanner;
 
public class CircleOfStudentsMain {
	static Scanner sc = new Scanner(System.in);
 
	public static void main(String[] args) {
		int q = sc.nextInt();
		for (int i = 0; i < q; i++) {
			int n = sc.nextInt();
			int[] p = new int[n];
			int index = 0;
			for (int j = 0; j < n; j++) {
				p[j] = sc.nextInt();
				if (p[j] == 1)
					index = j;
			}
 
			if (n <= 3) {
				System.out.println("YES");
			} else {
				if (index == n - 1) {
					if(p[index-1]-1 == p[index]) {
						down(p);
					} else if(p[0]-1 == p[index]) {
						up(p);
					} else {
						System.out.println("NO");
					}
				} else if (index == 0) {
					if (p[0] == p[1] - 1) {
						up(p);
					} else if(p[1] == n){
						down(p);
					} else {
						System.out.println("NO");
					}
				} else {
					int visited = 0;
					if(p[index] == p[index+1]-1){
						anyUp(p,visited,index);
					} else if(p[index] == p[index-1]-1) {
						anyDown(p,visited,index);
					} else {
						System.out.println("NO");
					}
				}
			}
		}
	}
	
	static void down(int[] p) {
		for(int i = p.length-2; i != 1; i--) {
			if(p[i] != p[i-1]-1) {
				System.out.println("NO");
				return;
			}
		}
		System.out.println("YES");
	}
	
	static void up(int[] p){
		for(int j = 0; j < p.length-2; j++) {
			if(p[j] != p[j+1]-1) {
				System.out.println("NO");
				return;
			}
		}
		System.out.println("YES");
	}
	
	static void anyUp(int[] p, int visited, int index) {
		for(int j = index; visited < p.length-2; j++) {
			if(j > p.length-1) {
				if(p[j-p.length] != p[j+1-p.length]-1) {
					System.out.println("NO");
					return;
				}
			} else if(j == p.length-1){
				if(p[j] != p[0]-1) {
					System.out.println("NO");
					return;
				}
			} else {
				if(p[j] != p[j+1]-1) {
					System.out.println("NO");
					return;
				}
			}
			visited++;
		}
		System.out.println("YES");
	}
	
	static void anyDown(int[] p, int visited, int index) {
		for(int j = index; visited < p.length-2; j--) {
			if(j < 0) {						
				if(p[(j-1)+p.length] != p[(j-2)+p.length]-1) {
					System.out.println("NO");
					return;
				}
			} else if(j == 0){
				if(p[j] != p[j-1+p.length]-1) {
					System.out.println("NO");
					return;
				}
			}else {
				if(p[j] != p[j-1]-1) {
					System.out.println("NO");
					return;
				}
			}
			visited++;
		}
		System.out.println("YES");
	}
}