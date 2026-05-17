import java.util.*;
import java.io.*;

public class Instagraph {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] a = new int[n + 1];
        int[] b = new int[n + 1];
        List<Integer>[] c = new ArrayList[n + 1];
        
        for (int i = 1; i <= n; i++) {
            c[i] = new ArrayList<>();
        }
        
        int[][] d = new int[m][2];

        for (int i = 0; i < m; i++) {
            st = new StringTokenizer(br.readLine());
            int u = Integer.parseInt(st.nextToken());
            int v = Integer.parseInt(st.nextToken());
            d[i][0] = u;
            d[i][1] = v;
            c[u].add(v);
            a[v] = a[v] + 1;
        }

        for (int i = 1; i <= n; i++) {
            Collections.sort(c[i]);
        }

        for (int i = 0; i < m; i++) {
            int u = d[i][0];
            int v = d[i][1];
            int idx = Collections.binarySearch(c[v], u);
            if (idx >= 0) {
                b[v] = b[v] + 1;
            }
        }

        int mejorNodo = 1;
        int mejorCC = a[1] - b[1];
        
        for (int v = 2; v <= n; v++) {
            int cc = a[v] - b[v];
            if (cc > mejorCC) {
                mejorCC = cc;
                mejorNodo = v;
            }
        }

        System.out.println(mejorNodo + " " + mejorCC);
    }
}
