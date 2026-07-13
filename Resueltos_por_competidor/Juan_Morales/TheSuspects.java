/*
 * Autor: OtherSpanish
 * Problema: 1197 - The Suspects
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3638#google_vignette
 */

//BiPartite graph BFS version
import java.io.*;
import java.util.*;

public class Main
{
	public static void main(String[] args) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter out = new PrintWriter(System.out);
		String line;
		while(!(line = in.readLine()).equals("0 0")) {
			StringTokenizer st = new StringTokenizer(line);
			int n = Integer.parseInt(st.nextToken()), m = Integer.parseInt(st.nextToken());

			if(m==0) {
				out.println(1);
				out.flush();
				continue;
			}

			Map<Integer, Set<Integer>> studGraph = new HashMap();
			Map<Integer, Boolean> studVisited = new HashMap();
			ArrayList<Integer>[] groupGraph = new ArrayList[m];
			boolean[] groupVisited = new boolean[m];
			for (int i = 0; i<m; i++) {
				groupGraph[i] = new ArrayList();
				st = new StringTokenizer(in.readLine());
				groupVisited[i] = false;
				int nStud = Integer.parseInt(st.nextToken());
				for (int j = 0; j<nStud; j++) {
					int student = Integer.parseInt(st.nextToken());
					studVisited.putIfAbsent(student, false);
					groupGraph[i].add(student);
					studGraph.putIfAbsent(student, new HashSet());
					studGraph.get(student).add(i);
				}
			}

			if(!studGraph.containsKey(0)) {
				out.println(1);
				out.flush();
				continue;
			}

			Queue<Integer> Qs = new LinkedList();
			Queue<Integer> Qg = new LinkedList();

			Qs.add(0);
			studVisited.put(0, true);
			int counter = 1;
			while(!Qs.isEmpty() || !Qg.isEmpty()) {

				if(Qg.isEmpty()) {
					int stud = Qs.poll();
					for(int group : studGraph.get(stud)) {
						if(!groupVisited[group]) {
						    groupVisited[group] = true;
							Qg.add(group);
						}
					}
				} else {
					int group = Qg.poll();
					for(int student : groupGraph[group]) {
						if(!studVisited.get(student)) {
						    studVisited.replace(student, true);
							counter++;
							Qs.add(student);
						}
					}
				}
			}

			    
			out.println(counter);
			out.flush();
		}

	}
}
