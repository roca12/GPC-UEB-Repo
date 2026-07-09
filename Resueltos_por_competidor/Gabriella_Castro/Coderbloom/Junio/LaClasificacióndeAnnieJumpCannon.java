/*
 * Autor: Las UEBonas
 * Problema: La clasificación de Annie Jump Cannon
 * Juez online: OmegaUp
 * Veredicto: Accepted
 * URL: https://omegaup.com/arena/CB062026IA/#problems/clasificacion-de-estrellas-ajc
 */


import java.util.HashMap;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int N = sc.nextInt();
        String [] nombres = new String[N];
        int[] temperaturas = new int[N];
        
        for(int i = 0; i < N; i++){
            nombres[i] = sc.next();
            temperaturas[i] = sc.nextInt();
        }
        
        for (int i = 0; i < N; i++){
            for(int j = 0; j < N - i - 1; j++){
                boolean boo = false;
                if(temperaturas[j] < temperaturas[j + 1]){
                    boo = true;
                } else if(temperaturas[j] == temperaturas[j + 1]){
                    if(nombres[j].compareTo(nombres[j + 1]) > 0){
                        boo = true;
                    }
                }
                
                if(boo){
                    int temp = temperaturas[j];
                    temperaturas[j] = temperaturas[j + 1];
                    temperaturas[j + 1] = temp;
                    
                    String nom = nombres[j];
                    nombres[j] = nombres[j + 1];
                    nombres[j + 1] = nom;
                }
            }
        }
        
        for(int i = 0; i < N; i++){
            System.out.println(nombres[i]);
        }
    }
}
