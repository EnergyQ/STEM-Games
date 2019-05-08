import java.util.Scanner;

public class Boxes {


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        String[] line = sc.nextLine().split(" ");

        int m = Integer.parseInt(line[0]);
        int n = Integer.parseInt(line[1]);

        boolean[] boxFull = new boolean[m];
        boolean rightOrder = true;

        for (int i = 1; i <= n; i++) {
            if (rightOrder) {
                for (int j = i - 1; j < m; j+=i) {
                    boxFull[j] = !boxFull[j];
                }
            } else {
                for (int j = m - 1 - (i - 1) ; j >= 0; j-=i) {
                    boxFull[j] = !boxFull[j];
                }
            }
            rightOrder = !rightOrder;

        }

        int result = 0;
        for (int i = 0; i<m; i++) {
            result += ( boxFull[i] ? 1 : 0 );
        }

        System.out.println(result);

    }
}
