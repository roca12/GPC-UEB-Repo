import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] letras = new int[26];
            
            for (int i = 0; i < n; i++) {
                String s = sc.next();
                for (int j = 0; j < s.length(); j++) {
                    letras[s.charAt(j) - 'a']++;
                }
            }
            int respuesta = Integer.MAX_VALUE;
            respuesta = Math.min(respuesta, letras['c' - 'a'] / 2);
            respuesta = Math.min(respuesta, letras['o' - 'a']);
            respuesta = Math.min(respuesta, letras['d' - 'a']);
            respuesta = Math.min(respuesta, letras['e' - 'a'] / 2);
            respuesta = Math.min(respuesta, letras['h' - 'a']);
            respuesta = Math.min(respuesta, letras['f' - 'a']);
            System.out.println(respuesta);
        }
    }
}
