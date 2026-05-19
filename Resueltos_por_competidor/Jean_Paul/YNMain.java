/*
 *  Autor: Jean Paul
 * Problema: B. Your Name
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2167/B
 */


import java.util.Scanner;
import java.util.Arrays;

public class YNMain {
    static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        int q;
        String s;
        String t;
        int si;
        char [] Text1;
        char [] Text2;
        q = sc.nextInt();
        for(int i = 0; i < q; i++){
           si = sc.nextInt();
           s = sc.next();
           t = sc.next();
           Text1 = new char[si];
           Text2 = new char[si];
           
           for(int j = 0; j < si; j++){
               Text1[j] = s.charAt(j);
               Text2[j] = t.charAt(j);
           }
           Arrays.sort(Text1);
           Arrays.sort(Text2);
           
           boolean igual = true;
           for(int j = 0; j < si; j++){
               if(Text1[j] != Text2[j]){
                   igual = false;
                   break;
               }
           }
           if(igual){
               System.out.println("YES");
           } else {
               System.out.println("NO");
           }
        }
    }
}
