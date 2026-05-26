/*
 * Autor: Gabriella Castro
 * Problema: Cutting Bookmarks
 * Juez online: Codeforces
 * Veredicto: Accepted
 * URL: https://codeforces.com/group/hRSGIe7nvK/contest/693848/problem/C
 */

//Hecho después de competencia
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
public class C {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        
        if (line != null) {
            StringTokenizer st = new StringTokenizer(line);
            
            int χ = Integer.parseInt(st.nextToken());
            int γ = Integer.parseInt(st.nextToken());
 
            long op1 = (long) χ * (γ / 7);
            
            long op2 = (long) (χ / 7) * γ;
 
            System.out.println(Math.max(op1, op2));
        }
    }
}
