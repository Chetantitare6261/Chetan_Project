#include<stdio.h>

int main(){
    int n=5;
    int num=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            printf("_");
        }
        for(int k=1; k<=i; k++){
            printf("%d",num);
            num+=1;
        }
        printf("\n");
    }
}