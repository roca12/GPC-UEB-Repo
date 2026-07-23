/*
 * Autor: Gabriella Castro
 * Problema: Cakeminator
 * Juez online: VJudge
 * Veredicto: Accepted
 * URL: https://vjudge.net/problem/CodeForces-330A
 */

import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String[] dimensiones = br.readLine().trim().split("\\s+");
        int r = Integer.parseInt(dimensiones[0]);
        int c = Integer.parseInt(dimensiones[1]);

        String[] mapa = new String[r];
        for (int i = 0; i < r; i++) {
            mapa[i] = br.readLine().trim();
        }
        int filasSeguras = 0;
        int columnasSeguras = 0;

        for (int i = 0; i < r; i++) {
            if (mapa[i].indexOf('S') == -1) {
                filasSeguras++;
            }
        }
        for (int j = 0; j < c; j++) {
            boolean fresa = false;
            for (int i = 0; i < r; i++) {
                if (mapa[i].charAt(j) == 'S') {
                    fresa = true;
                    break;
                }
            }
            if (!fresa) {
                columnasSeguras++;
            }
        }
        int comida = (filasSeguras * c) + (columnasSeguras * r) - (filasSeguras * columnasSeguras);
        System.out.println(comida);

    }

}
