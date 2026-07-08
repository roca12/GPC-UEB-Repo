/*
 * Autor: OtherSpanish
 * Problema: Boss
 * Juez online: CodeForces
 * Veredicto: Accepted
 * URL: https://codeforces.com/gym/101473/attachments
 */

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.StringTokenizer;

public class boss {

    static int[] age, index, pos2emp;
    static boolean[] visited;
    static ArrayList<ArrayList<Integer>> graph;
    static int minimo;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int I = Integer.parseInt(st.nextToken());

        age = new int[N + 1];
        index = new int[N + 1];
        pos2emp = new int[N + 1];
        visited = new boolean[N + 1];

        graph = new ArrayList<>();
        for (int j = 0; j <= N; j++) {
            graph.add(new ArrayList<>());
        }

        st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= N; i++) {
            age[i] = Integer.parseInt(st.nextToken());
            index[i] = i;
            pos2emp[i] = i;
        }

        for (int j = 0; j < M; j++) {
            st = new StringTokenizer(br.readLine());
            int x = Integer.parseInt(st.nextToken());
            int y = Integer.parseInt(st.nextToken());
            graph.get(y).add(x);
        }

        for (int j = 0; j < I; j++) {
            st = new StringTokenizer(br.readLine());
            char instruction = st.nextToken().charAt(0);

            if (instruction == 'P') {
                int e = Integer.parseInt(st.nextToken());
                int startPos = index[e];

                if (graph.get(startPos).isEmpty()) {
                    pw.println("*");
                } else {
                    minimo = Integer.MAX_VALUE;
                    Arrays.fill(visited, false);
                    dfs(startPos);
                    pw.println(minimo);
                }

            } else if (instruction == 'T') {
                int A = Integer.parseInt(st.nextToken());
                int B = Integer.parseInt(st.nextToken());

                int posA = index[A];
                int posB = index[B];

                pos2emp[posA] = B;
                pos2emp[posB] = A;

                index[A] = posB;
                index[B] = posA;
            }
        }

        pw.flush();
    }

    static void dfs(int pos) {
        visited[pos] = true;

        for (int nextPos : graph.get(pos)) {
            if (!visited[nextPos]) {
                int emp = pos2emp[nextPos];
                if (age[emp] < minimo) {
                    minimo = age[emp];
                }
                dfs(nextPos);
            }
        }
    }
}
