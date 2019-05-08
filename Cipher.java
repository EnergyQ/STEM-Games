import java.util.Scanner;

public class Cipher {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String line = sc.nextLine();

        char[] letters = line.toCharArray();
        StringBuilder output = new StringBuilder();
        for (char c : letters) {

            if (c == ' ') {
                output.append(" ");
                continue;
            }

            char newLeter;

            if (c + 17 > 122) {
                newLeter = (char)(c + 17 - 26);
            } else {
                newLeter = (char)(c + 17);
            }
            output.append(newLeter);
        }



        System.out.println(output);

    }
}
