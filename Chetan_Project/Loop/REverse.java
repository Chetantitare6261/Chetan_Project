import java.util.*;

public class REverse {
    public static void main(String []args){
        System.out.print("Enter the Number :");
        Scanner sc =new Scanner(System.in);
        int num = sc.nextInt();
        // int revers=0;
        // int digit=0;
        // while(num != 0){
        //     digit=num%10;
        //     revers=revers*10+digit;
        //     num=num/10;
        // }
        // System.out.print(revers+" ");

        while(num > 0){
            int last = num % 10;
            System.out.print(last+" ");
            num=num/10;
        }
    }
}
