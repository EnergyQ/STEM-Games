import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.HashMap;
import java.util.List;
import java.util.Scanner;

public class Keys {


    public static int similarity(String first, String second) {

        int[][] memory = new int[first.length() + 1][second.length() + 1];

        for (int i = 0; i <= first.length(); i++) {
            for (int j = 0; j <= second.length(); j++) {
                if (i == 0 || j == 0) {
                    memory[i][j] = i + j;
                }
                else {
                    memory[i][j] = Math.min(memory[i - 1][j - 1]
                                    + (first.charAt(i - 1) ==  second.charAt(j - 1) ? 0 : 1),
                            Math.min(
                            memory[i - 1][j] + 1,
                            memory[i][j - 1] + 1));
                }
            }
        }

        return memory[first.length()][second.length()];
    }

    public static void main(String[] args) {

        //Scanner sc = new Scanner(System.in);

        List<String> lines = null;
        try {
            lines = Files.readAllLines(Paths.get("C:\\Users\\triof\\Downloads\\keys.tar" +
                    "\\keys\\test_cases\\keys_9.in"));
        } catch (IOException e) {
            e.printStackTrace();
        }

        //String[] firstLine = sc.nextLine().split(" ");

        String[] firstLine = lines.get(0).split(" ");

        int m = Integer.parseInt(firstLine[0]);
        String query = firstLine[1];

        String[] keys = new String[m];

        for (int i=0; i<m; i++) {
            //keys[i] = sc.nextLine();
            keys[i] = lines.get(i + 1);
        }

        int mostSimilar = -1;
        int similarity = -1;
        int[] similarities = new int[m];

        for (int i=0; i<m; i++) {

            int sim = similarity(query, keys[i]);
            similarities[i] = sim;
            if (i == 0 || sim < similarity) {
                similarity = sim;
                mostSimilar = i;
            }
        }

        System.out.println(mostSimilar);
    }
}
