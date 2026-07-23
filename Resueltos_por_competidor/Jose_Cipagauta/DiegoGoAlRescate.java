import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

/*
 * Autor: JMCip
 * Problema: DiegoGo al rescate
 * Juez online: omegaUp
 * Veredicto: Accepted
 * URL: https:https://omegaup.com/arena/problem/DiegoGo-al-rescate/
 */
public class DiegoGoAlRescate {

	static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
	
	public static void main(String[] args) throws IOException {
		
		String brx[] = br.readLine().split(" ");
		
		int x = Integer.parseInt(brx[0]);
		
		double pre1 = 0;
		double pre2 = 0;
		
		for (int i = 0; i < x ; i++) {
			String bry[] = br.readLine().split(" ");
			double y = Double.parseDouble(bry[0]);
			

			double r = Math.max(pre1, pre2 + y);
			pre2 = pre1;
			pre1 = r;
		}
		
		System.out.printf("%.1f%n", pre1);
	}
}
