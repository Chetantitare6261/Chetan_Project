import java.util.*;

public class character {

    public static void main(String[] args) {
        System.out.print("Enter the Number :");
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();

        for (int i = 1; i <= num; i++) {
            char ch = 65;
            for (int j = 1; j <= i; j++) {
                System.out.print(ch);
                ch += 1;
            }
            System.out.println("");
        }
    }
}