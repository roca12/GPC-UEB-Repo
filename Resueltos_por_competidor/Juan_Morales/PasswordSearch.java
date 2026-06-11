import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;
import java.util.StringTokenizer;

public class PasswordSearch {

	static HashMap<String, Integer> map = new HashMap<>();

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		PrintWriter pw = new PrintWriter(System.out);

		String entrada;
		while ((entrada = br.readLine()) != null) {

			map.clear();
			StringTokenizer st = new StringTokenizer(entrada);

			int len = Integer.parseInt(st.nextToken());
			while (!st.hasMoreTokens()) {
				st = new StringTokenizer(br.readLine());
			}

			String pal = st.nextToken();

			String comp = "";
			String res = "";
			int resComp = 0;
			for (int i = 0; i < pal.length() - len + 1; i++) {
				comp = "";
				for (int j = 0; j < len; j++) {
					comp += Character.toString(pal.charAt(i + j));
				}
				if (!map.containsKey(comp)) {
					map.put(comp, 1);
				} else {
					map.put(comp, map.get(comp) + 1);
				}

				if (map.get(comp) > resComp) {
					resComp = map.get(comp);
					res = comp;
				}
			}
			pw.println(res);
			pw.flush();
		}
	}
}