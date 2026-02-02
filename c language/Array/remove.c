#include<stdio.h>

int main(){
    int arr[5] ={1,-13,-232,2,3};
    int set = 0;
    
    printf("The array is : ");
    for(int i=0; i<5; i++){
        if(arr[i]> set){
            printf(" %d",arr[i]);
            
        }
    }
    printf("\n");
}