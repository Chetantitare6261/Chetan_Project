// Find Minimum in an array

#include<stdio.h>
// #include<limits.h>

// int main(){
//     int arr[5] = {222,33,34,31,25};
//     int min=INT_MAX;
//     for(int i=0; i<5; i++){
//         if(min > arr[i]){
//             min=arr[i];
//         }
//     }
//     printf("Min value is : %d\n",min);
// }

int main(){
    int arr[5] = {222,33,3,31,25};
    int min = arr[0];

    for(int i=1; i<5; i++){
        if(min > arr[i]){
            min=arr[i];
        }
    }
    printf("Min value is : %d\n", min);
}