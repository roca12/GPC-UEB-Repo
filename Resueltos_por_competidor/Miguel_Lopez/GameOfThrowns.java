 /*
	 * Autor: Fetchnt
	 * Problema: Game of throwns
	 * Juez online: Kattis
	 * Veredicto: Accepted
	 * URL: https://vjudge.net/problem/Kattis-throwns
	 */

import java.io.*;
import java.util.*;

public class throwns {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] p = (br.readLine().split(" "));
        int n = Integer.parseInt(p[0]);
        int n2 = Integer.parseInt(p[1]);
        ArrayList<Integer> cola = new ArrayList<>();
        cola.add(0);
        String[] a = br.readLine().split(" ");
        for (int i = 0; i < a.length; i++) {
            if (!a[i].equalsIgnoreCase("undo")) {
                int b = Integer.parseInt(a[i]);
                int j = cola.get(cola.size() - 1);
                if (b < 0) {
                    while (b != 0) {
                        if (j <= 0) {
                            j = n - 1;
                            b++;
                        } else {
                            j--;
                            b++;
                        }
                    }
                } else {
                    while (b != 0) {
                        if (j == n - 1) {
                            j = 0;
                            b--;
                        } else {
                            j++;
                            b--;
                        }
                    }
                }
                cola.add(j);
            } else {
                int b = Integer.parseInt(a[++i]);
                while (b != 0) {
                    cola.remove(cola.size() - 1);
                    b--;
                }
            }
        }
        System.out.println(cola.get(cola.size() - 1));
    }
}
