

import java.util.Scanner;

public class SumNumber {

    public static void main( String []argm){
        System.out.print("Enter the number : ");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int count=0;
        int sum =0;
        while(count <= n){
            sum=sum+count;
            count++;
        }
        System.out.println(sum+" ");
     } 
}
