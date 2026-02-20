import java.util.*;

public class product{
    
    public static int product(int a, int b){
        int product = a*b;
        return product;
    }
    
    public static void main(String []args){
        System.out.print("Enter the value :");
        Scanner sc = new Scanner(System.in);
        int a =sc.nextInt();
        int b =sc.nextInt();
        int mul= product(a,b);
        System.out.println("mul is :"+ mul);
    }
}