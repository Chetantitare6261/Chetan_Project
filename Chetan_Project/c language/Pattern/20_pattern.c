
//    1        1
//    12      21
//    123    321
//    1234  4321
//    1234554321

#include<stdio.h>

int main(){
    int n=9;

    for(int i=1; i<=n; i++){
        int start=1;
        for(int j=1; j<=i; j++){
            printf("%d", start);
            start+=1;
        }

        for(int k=1; k<=2*(n-i); k++){
            printf("_");
        }

       for(int j=1; j<=i; j++){
            printf("%d", start-1);
            start-=1;
        }
    
     
        printf("\n");
    }
}