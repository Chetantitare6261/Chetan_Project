// Taking input and return all input sum 

#include<stdio.h>

int main(){
    int arr[5];
    int sum=0;
    printf("Enter The number : ");

    for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("Sum is : %d \n",sum);
}