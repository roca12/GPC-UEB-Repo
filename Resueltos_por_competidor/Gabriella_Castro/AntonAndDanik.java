/*
 * Autor: Gabriella Castro
 * Problema: Anton And Danik
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/problemset/problem/734/A
 */

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class AntonAndDanik {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String linea = br.readLine();
        if (linea == null) return;
        
        String s = br.readLine();
        if (s == null) return;

        int anton = 0;
        int danik = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (c == 'A') anton++;
            else if (c == 'D') danik++;
        }

        if (anton > danik) {
            System.out.println("Anton");
        } else if (danik > anton) {
            System.out.println("Danik");
        } else {
            System.out.println("Friendship");
        }
    }
}
