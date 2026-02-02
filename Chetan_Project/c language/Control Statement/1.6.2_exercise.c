// Generate Fibonacci series upto n terms
// 3. Check if a number is palindrome

#include<stdio.h>

int main(){
    int n,fab;
    int a=0;
    int b=1;
    printf("enter the number : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d, ",a);
        fab=a+b;
        a=b;
        b=fab;   
    }

}