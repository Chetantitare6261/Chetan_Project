#include <stdio.h>
#include <stdlib.h>

struct stack {
    int data;
    struct stack *next;
};

struct stack *top = NULL;


void push(int value) {
    struct stack *temp;
    temp = (struct stack *)malloc(sizeof(struct stack));

    if (temp == NULL) {
        printf("Stack Overflow (Memory not allocated)\n");
        return;
    }

    temp->data = value;
    temp->next = top;
    top = temp;

    printf("%d pushed into stack\n", value);
    printf("%p value of temp\n",&temp);
    printf("%p value of top\n", &top);
}

int main() {
    push(10);
    push(20);
    push(30);

    return 0;
}
