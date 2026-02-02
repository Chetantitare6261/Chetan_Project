#include<stdio.h>

int main(){
    int arr[5]={1,-1,2,-2,4};
    int j=0;

    for(int i=0; i<5; i++){
        if(arr[i]>0){
            arr[j++]=arr[i];
        }
    }
    printf("After Removing Element From The Array : ");
    for(int i=0; i<j; i++){
         printf("%d  ", arr[i]);
            }
            printf("\n");
    return 0;
}