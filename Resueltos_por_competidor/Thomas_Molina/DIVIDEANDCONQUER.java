/*
 * Autor: Thomas Molina
 * Problema: A. Divide and Conquer
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2241/A
 */
 

import java.util.*;

public class DIVIDEANDCONQUER {
    public static void main (String[] args) 
	{
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++){
             int X = sc.nextInt();
        int Y = sc.nextInt();
        if (X%Y==0){
            System.out.println("YES");
        }
        else{
            System.out.println("NO");
        }

        }
    }
    
}
