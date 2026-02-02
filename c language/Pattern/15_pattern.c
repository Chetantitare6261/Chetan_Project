// 1
// 13
// 135
// 1357 

#include<stdio.h>

// int main(){
//     int n=8;

//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i+1; j++){
//             if(j%2==0){
//                 j=j+1;
//                 printf("%d ",j);
//             }else{
//             printf("%d ",j);
//             }
//         }
//         printf("\n");
//     }
    
// }

int main(){
     int n;
     printf("enter the number");
     scanf("%d", &n);

     for(int i=0; i<n; i++){
        int num=1;
        for(int j=0; j<=i; j++){
            printf("%d", num);
            num+=2;
        }
        printf("\n");
     }
     
}

