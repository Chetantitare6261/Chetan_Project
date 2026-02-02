//    ABCDE
//    ABCD
//    ABC
//    AB
//    A


#include<stdio.h>

int main(){
    int n=5;

    for(int i=0; i<n; i++){
        char ch = 65;
        for(int j=0; j<n-i; j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}