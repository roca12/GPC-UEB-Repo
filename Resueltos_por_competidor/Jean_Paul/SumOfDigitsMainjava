/*
 * Autor: Jean Paul
 * Problema: B. Sum of Digits
 * Juez online: Polygon
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/102/B
 */

import java.util.*;
 
public class SumOfDigitsMain {
  static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        String n = sc.next();
      long stps = 0;
      while(n.length() > 1){
        long total = 0;
        for(int i = 0; i < n.length(); i++){
          total+=n.charAt(i)-'0';
        }
        n = String.valueOf(total);
        stps++;
      }
 
      System.out.println(stps);
    }
}
