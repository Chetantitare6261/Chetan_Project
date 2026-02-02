// Taking input and return all input product 

#include<stdio.h>

int main(){
    int arr[5];
    int sum=1;
    printf("Enter The number : ");

    for(int i=0; i<5; i++){
    scanf("%d",&arr[i]);
    sum=sum*arr[i];
    }
    printf("Sum is : %d \n",sum);
}