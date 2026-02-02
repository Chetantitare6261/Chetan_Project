#include <stdio.h>

int findMax(int arr[], int n) {
 
    if (n == 1)
        return arr[0];


    int max = findMax(arr, n - 1);

    if (arr[n - 1] > max)
        return arr[n - 1];
    else
        return max;
}

int main() {
    int arr[] = {4, 17, 9, 25, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Maximum value = %d", findMax(arr, n));
    return 0;
}
