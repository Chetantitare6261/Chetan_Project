// Write a C program to find the LCM of two numbers and then verify
// it by listing several common multiples.

#include<stdio.h>

int main(){
    int a,b,max;
    printf("Enter The number : ");
    scanf("%d %d",&a,&b);

    if(a>b){
        max=a;
    }else{
        max=b;
    }

    while(1){
        if(max%a==0 && max%b==0){
           
            break;
        }
        max++;
    }
    printf("LCM is : %d",max);
    printf("\n");
    for(int i=1; i<5; i++){
        printf("%d ", max*i);
    }

}