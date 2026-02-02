 import java.util.Scanner;
 
 public class multiple {
    public static void main(String [] args){
       int n=10; 
       System.out.print("Enter the number : ");
       for(int i=0; i<n; i++){
        Scanner sc= new Scanner(System.in);
        int num =sc.nextInt();
        if(num%10 == 0 ){
            break;
        }
        System.out.println(num);
        System.out.print("Enter the number : ");
       }
       

    }
}
