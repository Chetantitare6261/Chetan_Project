// Write a program that generates and displays the multiplication table for a
// number entered by the user using a for loop.

#include<stdio.h>

int main(){
    int n;
    int mul=1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i=1; i<=10; i++){
        mul=n*i;
        printf("%d * %d is  : %d  ",n,i,mul);
        printf("\n");
    }
}