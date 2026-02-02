#include <stdio.h>

int main() {
    char str="hello";
    int  count = 0;

    printf("Enter a string: ");
    scanf("%s", str);   

    for ( int i = 0; i<str.length(); i++) {
        if (i == 'a' || i == 'e' || i == 'i' ||
            i == 'o' || i == 'u') {
            count++;
        }
    }

    printf("Vowels count = %d", count);
    return 0;
}
