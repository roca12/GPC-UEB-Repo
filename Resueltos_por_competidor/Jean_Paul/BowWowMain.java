/*
 *  Autor: Jean Paul
 * Problema: A. BowWow and the Timetable
 * Juez online: Polygon 
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/1204/A
 */

import java.util.*;
 
public class BowWowMain {
  static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
      String s = sc.next();
      long missed = 0;
 
      if(s.substring(1,s.length()).contains("1")){
        missed = s.length() % 2 == 0 ? s.length()/2 : (s.length()+1)/2;
      } else {
        missed = s.length()/2;
      }
 
      System.out.println(missed);
    }
}
