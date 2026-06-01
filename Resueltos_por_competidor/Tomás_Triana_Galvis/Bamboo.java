import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
/*
 * Autor: Tomás Triana Galvis
 * Problema: The Monkey and the Oiled Bamboo
 * Juez online: LightOjTheMonkeyAndTheOiledBamb
 * Veredicto: Accepted
 * Url: https://lightoj.com/problem/the-monkey-and-the-oiled-bamb
 **/ 
public class Bamboo2 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine()); 

        for (int t = 1; t <= T; t++) {
            int n = Integer.parseInt(br.readLine()); 
            int[] rungs = new int[n];
            StringTokenizer st = new StringTokenizer(br.readLine());
            for (int i = 0; i < n; i++) {
                rungs[i] = Integer.parseInt(st.nextToken());
            }

            int high = rungs[0];
            for (int i = 1; i < n; i++) {
                high = Math.max(high, rungs[i] - rungs[i - 1]);
            }
            int answer = high;
            if(!canClimb(rungs, answer)) {
            	answer++;
            }

            System.out.println("Case " + t + ": " + answer);
        }
    }


    static boolean canClimb(int[] rungs, int k) {
        int current = 0;
        for (int rung : rungs) {
            int jump = rung - current;
            if (jump > k) return false;
            if (jump == k) k--;
            current = rung;
        }
        return true;
    }
}
