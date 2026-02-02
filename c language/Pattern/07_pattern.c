#include<stdio.h>

int main(){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            printf("_");
        }
        for(int k=n-i; k<=n; k++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}