import java.util.Scanner;

public class Prime {

    public static void main(String[] args){
        System.out.print("Enter the number : ");
        Scanner n = new Scanner(System.in);
        int num= n.nextInt(); 
        for(int i=2; i<=num-1; i++){
            if(num%i ==0){
                System.out.println("Not prime number");
                break;
            }else{
                System.out.println("prime number ");
                break;
            }
        }
    }
    

}
