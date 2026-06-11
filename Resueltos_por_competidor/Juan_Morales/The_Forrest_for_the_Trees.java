import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.HashSet;

public class The_Forrest_for_the_Trees {
	static ArrayList<ArrayList<Integer>> graph = new ArrayList<>();
	static boolean[] visited = new boolean[26 + 1];

	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		int tc = Integer.parseInt(br.readLine());
		while ((tc--) > 0) {
			for (int i = 0; i < 26; i++) {
				graph.add(new ArrayList<>());
			}

			String edge;
			HashSet<Integer> existen = new HashSet<>();

			while ((edge = br.readLine()).charAt(0) != '*') {
				int num1 = (int) edge.charAt(1) - 65, num2 = (int) edge.charAt(3) - 65;
				graph.get(num1).add(num2);
				graph.get(num2).add(num1);
				existen.add(num1);
				existen.add(num2);
			}

			String solitos = br.readLine();
			for (int i = 0; i < solitos.length(); i++) {
				if (solitos.charAt(i) >= (int) 'A' && solitos.charAt(i) <= (int) 'Z') {
					existen.add((int) solitos.charAt(i) - 65);
				}
			}

			int trees = 0, acorns = 0;
			for (int ex : existen) {
				if (!visited[ex]) {
					if (graph.get(ex).isEmpty()) {
						acorns++;
						visited[ex] = true;
					} else {
						trees++;
						dfs(ex);
					}
				}
			}

			pw.println("There are " + trees + " tree(s) and " + acorns + " acorn(s).");
			pw.flush();
			graph.clear();
			visited = new boolean[26 + 1];
		}
	}

	static void dfs(int nodOr) {
		visited[nodOr] = true;

		for (int vecino : graph.get(nodOr)) {
			if (!visited[vecino]) {
				dfs(vecino);
			}
		}
	}

}
