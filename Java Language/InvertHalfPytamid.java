// 1234
// 123
// 12
// 1

import java.util.*;

public class InvertHalfPytamid{
    public static void main(String []args){
        System.out.println("Enter the number : ");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        
        for(int i=1; i<=n; i++){
            int num=1;
            for(int j=1; j<=n-i; j++){
                System.out.print(num);
                num+=1;
            }
            System.out.println("");
        }
    }

    
}