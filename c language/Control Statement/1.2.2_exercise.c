// Calculate the sum of numbers from 1 to N using a for loop. 


#include<stdio.h>

int main(){
   int n;
   int sum=0;
   printf("enter te nunber :");
   scanf("%d", &n);

   for(int i=0; i<n; i++){
    sum=sum+i;
     printf("the sum is : %d",sum);
     printf("\n");
   }
   printf("the sum is : %d",sum);

}