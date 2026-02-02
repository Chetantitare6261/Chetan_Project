
//      A
//     ABA
//    ABCBA
//   ABCDCBA

#include<stdio.h>

int main(){
    int n=4;

    for(int i=1; i<=n; i++){
        char ch=65;
        for(int j=1; j<=i; j++){
            printf("%c",ch);
            ch +=1;
        }
        
        for(int k=1; k<i; k++){
            printf("%c",ch);
            ch -=1;
        }
       printf("\n");
    }
}