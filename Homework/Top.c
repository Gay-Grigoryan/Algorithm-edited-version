
/*
// Stack with Top
#include <stdio.h>

#include <stdlib.h>
#define MAX_SIZE 100
struct Stack {
    int array[MAX_SIZE];
    int top;
};
struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    stack->top = -1;
    return stack;
}
int isFull(struct Stack* stack) {
    return stack->top == MAX_SIZE - 1;
}
int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}
void push(struct Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stack Overflow\n");
        return;
    }
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->array[stack->top--];
}
int top(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        exit(1);
    }
    return stack->array[stack->top];
}
int main() {
    struct Stack* stack = createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("Top element of stack: %d\n", top(stack));
    printf("%d popped from stack\n", pop(stack));
    printf("Top element of stack: %d\n", top(stack));
    printf("%d popped from stack\n", pop(stack));
    printf("Top element of stack: %d\n", top(stack));
    printf("%d popped from stack\n", pop(stack));
    return 0;
}
*/