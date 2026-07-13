/*
 * Autor: OtherSpanish
 * Problema: Escalator
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/103388/problem/E
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.LinkedList;
import java.util.Queue;
import java.util.StringTokenizer;

public class Escalator {

    static class Pair {
        int t;
        int d;
        Pair(int t, int d) {
            this.t = t;
            this.d = d;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());

        Queue<Pair> q0 = new LinkedList<>();
        Queue<Pair> q1 = new LinkedList<>();

        for (int i = 0; i < N; i++) {
             st = new StringTokenizer(br.readLine());
            int t = Integer.parseInt(st.nextToken());
            int d = Integer.parseInt(st.nextToken());
            Pair p = new Pair(t, d);
            if (d == 0) {
                q0.add(p);
            } else {
                q1.add(p);
            }
        }

        int dir = -1;
        long end = 0;

        while (!q0.isEmpty() || !q1.isEmpty()) {
            if (dir == -1) {
                int t0 = Integer.MAX_VALUE;
                if (!q0.isEmpty()) {
                    t0 = q0.peek().t;
                }
                int t1 = Integer.MAX_VALUE;
                if (!q1.isEmpty()) {
                    t1 = q1.peek().t;
                }

                if (t0 <= t1) {
                    dir = 0;
                    Pair p = q0.poll();
                    long start = end;
                    if (p.t > start) {
                        start = p.t;
                    }
                    end = start + 10;
                } else {
                    dir = 1;
                    Pair p = q1.poll();
                    long start = end;
                    if (p.t > start) {
                        start = p.t;
                    }
                    end = start + 10;
                }
            } else {
                Queue<Pair> same = q0;
                if (dir == 1) {
                    same = q1;
                }

                if (!same.isEmpty() && same.peek().t < end) {
                    Pair p = same.poll();
                    long candidate = p.t + 10;
                    if (candidate > end) {
                        end = candidate;
                    }
                } else {
                    dir = -1;
                }
            }
        }

        pw.println(end);
        pw.flush();
    }
}
