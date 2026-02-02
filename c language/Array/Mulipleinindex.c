// odd index element will be seconde multiple and even index element is multiple by 10

#include<stdio.h>

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    

    printf("the array is : ");
    for(int i=0; i<7; i++){
        if(i%2 != 0){
            arr[i]=arr[i]*2;
        }else{
            arr[i]=arr[i]+10;
        }
        printf("%d ",arr[i]);   
    }
    printf("\n");
}
    