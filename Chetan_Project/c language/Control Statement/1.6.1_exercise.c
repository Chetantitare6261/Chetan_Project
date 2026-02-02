// Check if a number is prime

#include<stdio.h>

int main(){
    int n;
    printf("Enter The number : ");
    scanf("%d",&n);

    if(n<=2){
        printf("prime number : %d",n);
         
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            printf("Not prime number : %d",n);
            break;
        }else{
            printf("prime number is : %d",n);
            break;
        }
        printf("\n");
    }
}