import java.util.Scanner;

public class Crochet {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String startDay = sc.next();
        String startTime = sc.next();

        String endDay = sc.next();
        String endTime = sc.next();

        int start = convertir(startDay, startTime);
        int end = convertir(endDay, endTime);

        int diff = end - start;

        if (diff <= 0) {
            diff += 7 * 24 * 60;
        }

        int days = diff / (24 * 60);
        diff %= (24 * 60);

        int hours = diff / 60;
        int minutes = diff % 60;

        StringBuilder ans = new StringBuilder();

        int count = 0;
        if (days > 0) count++;
        if (hours > 0) count++;
        if (minutes > 0) count++;

        int printed = 0;

        if (days > 0) {
            ans.append(days).append(days == 1 ? " day" : " days");
            printed++;
        }

        if (hours > 0) {
            if (printed > 0) {
                if (count == 3) {
                    ans.append(", ");
                } else {
                    ans.append(" and ");
                }
            }
            ans.append(hours).append(hours == 1 ? " hour" : " hours");
            printed++;
        }

        if (minutes > 0) {
            if (printed > 0) {
                if (count == 3) {
                    ans.append(", ");
                } else {
                    ans.append(" and ");
                }
            }
            ans.append(minutes).append(minutes == 1 ? " minute" : " minutes");
        }

        System.out.println(ans);
    }

    static int convertir(String day, String time) {
        int d = 0;
        switch (day) {
            case "Mon": d = 0; break;
            case "Tue": d = 1; break;
            case "Wed": d = 2; break;
            case "Thu": d = 3; break;
            case "Fri": d = 4; break;
            case "Sat": d = 5; break;
            case "Sun": d = 6; break;
        }

        int hour = Integer.parseInt(time.substring(0, 2));
        int minute = Integer.parseInt(time.substring(3));

        return d * 24 * 60 + hour * 60 + minute;
    }
}
