/*
 *  Autor: Jean Paul
 * Problema: B. Digits
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/2043/B
 */

import java.util.*;
 
public class DigitsMain {
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      for(int i = 0; i < t; i++){
        int n = sc.nextInt();
        int d = sc.nextInt();
 
        String divisores = "1 ";
 
      
        if(n >= 3 || d % 3 == 0){
          divisores+="3 ";
        }
        if(d == 5){
          divisores+="5 ";
        }
        if(n >= 3 || d == 7){
          divisores+="7 ";
        }
        if((d == 9 || n >= 6) || (n>=3 && (d % 3 == 0))){
          divisores+="9";
        }
        System.out.println(divisores);
      }
    }
}
