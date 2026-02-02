// Check if a number is palindrome

#include<stdio.h>

int main(){
    int n=123,digit,rev=0;
    int original=n;
   

   while (n != 0) {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    
    printf(" Reverse number is : %d\n",rev);

    if(rev==original){
        printf("palindrom number : %d",n);
    }else{
        printf("Not palindrom ");
    }
}