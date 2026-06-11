import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.HashMap;

 class Recount {

    static HashMap<String, Integer> map = new HashMap<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        String entr;
        int may = 0;
        String win = "";
        int cont = 0;
        while ((entr = br.readLine()).charAt(0) != '*') {
            map.putIfAbsent(entr, 1);
            if (map.containsKey(entr))
                map.replace(entr, map.get(entr) + 1);
            if (may < map.get(entr)) {
                may = map.get(entr);
                win = entr;
                cont = 0;
            } else if (may == map.get(entr)) {
                cont++;
            }

        }
        
        if(cont>0) {
            pw.println("Runoff!");
        } else {
            pw.println(win);
        }
        pw.flush();
    }
}
