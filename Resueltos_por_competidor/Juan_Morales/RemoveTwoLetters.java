/*
 * Autor: OtherSpanish
 * Problema: D. Remove Two Letters
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/contest/1800/problem/D
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        int tc = Integer.parseInt(br.readLine());
        for (int i = 0; i < tc; i++) {
            int size = Integer.parseInt(br.readLine());
            String st = br.readLine();

            int count = 1; 
            for (int j = 1; j < size - 1; j++) {
                if (st.charAt(j - 1) != st.charAt(j + 1)) {
                    count++;
                    }
            }

            pw.println(count);
            pw.flush();
        }
    }
}
