import java.util.*;

public class NPrint {
    public static void main( String []argm){
        System.out.print("Enter the number : ");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int count=0;
        while(count < n){
            System.out.print(count+" ");
            count++;
        }
        System.out.println("");
     }

 }

