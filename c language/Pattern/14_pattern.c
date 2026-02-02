// 1357
// 1357
// 1357
// 1357 

#include<stdio.h>

int main(){
    int n=5,k=8;

    for(int i=1; i<n; i++){
        for(int j=1; j<k; j++){
            if(j%2==0){
                j=j+1;
                printf("%d ",j);
            }else{
            printf("%d ",j);
            }
        }
        printf("\n");
    }
    
}