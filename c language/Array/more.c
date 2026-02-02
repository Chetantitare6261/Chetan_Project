#include<stdio.h>

int main(){
    int arr[5] = {33,34,35,36,37};
    
    printf("The value that is more than 35 is : ");
    for(int i=0; i<=4; i++){
        if(arr[i] > 35){
            
        }else{
            printf("%d ",i);
        }
    }
    printf("\n");
}