#include<stdio.h>

// Take input in manually
// int main(){
//     int arr[2];
//     printf("enter the number :");
//     scanf("%d",&arr[0]);
//     scanf("%d",&arr[1]);

//     printf("input is : %d \n",arr[0]);
//     printf("input is : %d \n",arr[1]);
// }

// Tack input using loop

int main(){
    int arr[5];
    printf("Enter 5 number : ");

    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
        printf("The Araay is : %d \n ",arr[i]);
    }
    
    
}