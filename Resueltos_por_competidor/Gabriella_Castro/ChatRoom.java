/*
 * Autor: Gabriella Castro
 * Problema: Chat room
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/58/A
 */

import java.util.Scanner;

public class ChatRoom {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        if (!sc.hasNext()) {
            return;
        }
        
        String s = sc.next();
        String obj = "hello";
        int objIndex = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == obj.charAt(objIndex)) {
                objIndex++;
                if (objIndex == obj.length()) {
                    break;
                }
            }
        }
        
        if (objIndex == obj.length()) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

    }
}
