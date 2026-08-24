import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        StringBuilder sb = new StringBuilder();
        HashMap<Integer, Integer> fr = new HashMap<>();
        
        int n = sc.nextInt();
        
        for(int i = 0; i < n; i++) {
            int num = sc.nextInt();
            fr.put(num, fr.getOrDefault(num, 0) + 1);
        }
        
        int maxFrecuencia = -1;
        for(int frecuencia : fr.values()) {
            if(frecuencia > maxFrecuencia) {
                maxFrecuencia = frecuencia;
            }
        }
        
        ArrayList<Integer> masRepetidos = new ArrayList<>();
        for(Map.Entry<Integer, Integer> entry : fr.entrySet()) {
            if(entry.getValue() == maxFrecuencia) {
                masRepetidos.add(entry.getKey());
            }
        }
        Collections.sort(masRepetidos);
        if(masRepetidos.size() > 1) {
            sb.append("Los elementos más repetidos son: ");
        }else {
            sb.append("El elemento más repetido es: ");
        }
        
        for (int i = 0; i < masRepetidos.size(); i++) {
            sb.append(masRepetidos.get(i));
            if (i == masRepetidos.size() - 2) {
                sb.append(" y ");
            }else if (i < masRepetidos.size() - 2) {
                sb.append(", ");
            }
        }
        
        
        if(maxFrecuencia > 1) {
        	if(masRepetidos.size() > 1) {
        		sb.append(" (aparecen ").append(maxFrecuencia).append(" veces)");
        	}else {
        		sb.append(" (aparece ").append(maxFrecuencia).append(" veces)");
            }
        }else {
        	if(masRepetidos.size() > 1) {
        		sb.append(" (aparecen ").append(maxFrecuencia).append(" vez)");
        	}else {
        		sb.append(" (aparece ").append(maxFrecuencia).append(" vez)");
            }
        }
        System.out.println(sb.toString());
    }
}
