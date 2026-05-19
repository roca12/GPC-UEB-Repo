/*
 *  Autor: Jean Paul
 * Problema: B. Prefix Max
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2185/B
 */


import java.util.Scanner;
import java.util.Arrays;
import java.util.Collections;

public class PMMain {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int t, n, ai, aj;
        int []arr;
        t = sc.nextInt();
        for(int i = 0; i < t; i++){
            n = sc.nextInt();
            arr = new int[n];
            for(int j = 0; j < n; j++){
                arr[j] = sc.nextInt();
            }
            Arrays.sort(arr);
            System.out.println(arr[n-1]*n);
        }
    }
}
