/*
 * Autor: Gabriella Castro
 * Problema: Same Differences
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-1520D
 */

import java.util.*;
import java.io.*;


public class Main {
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine());

		while (t-- > 0) {
			int n = Integer.parseInt(br.readLine());
			StringTokenizer st = new StringTokenizer(br.readLine());

			Map<Integer, Long> nums = new HashMap<>();

			for (int i = 1; i <= n; i++) {
				int val = Integer.parseInt(st.nextToken());
				int diff = val - i;
				nums.put(diff, nums.getOrDefault(diff, 0L) + 1);
			}

			long total = 0;

			for (long contar : nums.values()) {
				if (contar > 1) {
					total += (contar * (contar - 1)) / 2;
				}
			}

			System.out.println(total);
		}
	}
}
