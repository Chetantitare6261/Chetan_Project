// Find the maxium value in an array

#include<stdio.h>
#include<limits.h>
// int main(){
//     int arr[5] = {-1010, -20, -3333, -40, -729};
//     int max= arr[0];

//     for(int i=1; i<5; i++){
//         if(arr[i] > max){
//             max=arr[i];
//         }else{
//             printf(" ");
//         }
//     }
//     printf("Max in the array is : %d \n",max);

// }

int main(){
    int arr[5] = {-1010, -20, -3333, 90, -729};
    int max= INT_MIN;

    for(int i=1; i<5; i++){
        if(arr[i] > max){
            max=arr[i];
        }else{
            printf(" ");
        }
    }
    printf("Max in the array is : %d \n",max);

}